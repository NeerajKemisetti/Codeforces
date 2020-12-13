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
 
void next(char &x)
{
    if(x <= 'b') x++;
    else  x='a';
}

void solve()
{
    int n,k;
    cin>>n>>k;
    char cur='a';
    for(int i=-0;i<n;++i)
    {
       cout << cur;
       next(cur);
    }
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
    cout<<endl;
    return 0;     
}
