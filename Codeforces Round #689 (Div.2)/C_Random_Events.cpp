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

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> A(n+1);
  vector<pair<int, double>> B(m);

  for(int i = 1;i <=n;i++) {
    cin >> A[i];
  }
  for(int i = 0;i < m;i++) {
    cin >> B[i].first >> B[i].second;
  }

  int mismatch = -1;
  for(int i = 1; i <= n;i++) {
    if(i != A[i]) mismatch = i;
  }

  if(mismatch == -1) {
    cout << 1 << endl;
    return;
  }

  double prob = 1;
  for(int i = 0;i < m;i++) {
    if(B[i].first >= mismatch) {
      prob *= (1-B[i].second);
    }
  }

  cout << setprecision(15) << fixed << (double)(1-prob) << endl;
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
