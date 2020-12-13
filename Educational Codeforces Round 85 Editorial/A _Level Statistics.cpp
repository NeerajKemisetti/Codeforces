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
 
 
int main()
{
    fast_io;
    int t,n;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        int ip=0,ic=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int p,c;
            cin>>p>>c;
            
            if(!(p>=ip && c>=ic && p-ip>=c-ic))
            {
                flag=false;   
            }
            ip=p;
            ic=c;
        }
        cout<<(flag==true?"YES":"NO")<<endl;
    }
    return 0;
}
