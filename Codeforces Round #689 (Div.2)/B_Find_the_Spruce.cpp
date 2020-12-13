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
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];

    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='*')
                dp[i][j] =1;
        }
    }
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=1;j--)
        {
            if(dp[i][j]==1){
                dp[i][j]=1+min({dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]});
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            ans+=dp[i][j];
    }
    cout<<ans<<endl;
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
