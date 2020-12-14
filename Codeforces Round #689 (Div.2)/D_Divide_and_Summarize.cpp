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

void populate_psum(vector<int> &A, unordered_set<long long> &psum)
{
    long long sum=0;
    int asize = A.size();
    for(int i=0 ; i< asize ; i++)
    {
        sum+=A[i];
    }
    psum.insert(sum);

    int minm = *min_element(A.begin(),A.end());
    int maxm = *max_element(A.begin(),A.end());

    if(minm == maxm) return;

    int avg =(minm+maxm)/2;

    vector<int> lessthan, greaterthan;
    for(int i=0; i<asize ; i++)
    {
        if(A[i]<=avg) lessthan.push_back(A[i]);
        else greaterthan.push_back(A[i]);
    }

    populate_psum(lessthan, psum);
    populate_psum(greaterthan, psum);
}

void solve()
{
    int n,q;
    cin>> n >> q;
    vector<int> A(n), Q(q);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>Q[i];
    }
    unordered_set<long long> psum;
    populate_psum(A, psum);

    for(int i=0;i<q;i++)
    {
        if(psum.count(Q[i])==1){
            cout<<"Yes"<<endl;}
        else{
            cout << "No"<<endl;
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
