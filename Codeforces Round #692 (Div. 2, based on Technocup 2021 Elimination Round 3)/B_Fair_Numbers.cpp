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
    long long n;
    cin>>n;
    int dummy;
    
    int flag=0;
  
    int d;
    long long i=0;
    
    for(i=n;i<1000000000000000001;i++)
    {
        long long num =i;

        while(num>0)
        {
            d = num%10;
            if(d==0)
            {
                dummy=0;
            }
            else
            {
                if(i%d == 0)
                {
                    flag =1;
                }
                else
                {
                    flag =0;
                    break;
                }
            }
            num = num/10;
        }
        if(flag == 1)
        {
            cout<<i<<endl;
            break;
        }
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
    return 0;     
}
