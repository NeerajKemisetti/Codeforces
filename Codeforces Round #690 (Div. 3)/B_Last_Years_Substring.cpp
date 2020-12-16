#include <bits/stdc++.h>

#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

typedef long long ll;
 
const int MAXINT = 2147483098;
const ll MAXLL = 9223372036854775258LL;

using namespace std;
 
 
void solve()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    
    for(int i=0;i<=4;i++)
    {
        string t1=s.substr(0,i);
        string t2=s.substr(n-4+i);
        string ans = t1+t2;
        if(ans=="2020"){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
}

int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;     
}
