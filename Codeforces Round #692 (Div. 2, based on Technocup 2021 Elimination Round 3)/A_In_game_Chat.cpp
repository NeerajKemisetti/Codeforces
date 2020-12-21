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
    string s;
    //char s[100];
    cin>>s;
    int count =0;

    for(int i=n-1;i>=0;i--)
    {
        if(s[i] == ')')
        {
            count++;
            continue;
        }
        else
        {
            break;
        }
    }
    int diff = n-count;
    if(count>diff)
    {
        cout<< "Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
 
int main()
{
    fast_io;
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    return 0;     
}
