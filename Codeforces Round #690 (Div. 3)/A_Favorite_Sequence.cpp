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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            cout<<a[k]<<" ";
            continue;
        }
        else
        {
            cout<<a[n-1-k]<<" ";
            k++;
        }
    }
    cout<<endl;
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
