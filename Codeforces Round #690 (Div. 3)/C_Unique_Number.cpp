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
    cin>>n;
    if(n>45){
        cout<<-1<<endl;
        return;
    }
    string s="";
    for(int i=9;i>=1;i--)
    {
        if(n<=9 && n<=i)
        {
            s+=to_string(n);
            n=0;
            break;
        }
        else{
            s += to_string(i);
            n-=i;
        }
    }
    if(n){
        cout << -1<<endl;
        return;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
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