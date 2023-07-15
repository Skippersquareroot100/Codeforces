#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"
using namespace std;
using ll = long long;
using ld = long double;

inline void solve() {
  int n; cin >> n;
  int evn, odd, x;
  evn = odd = INT32_MAX;
  for(int i=0;i<n;++i) {
    cin >> x;
    if(x&1) odd = min(odd,x);
    else evn = min(evn,x);
  }
  if(odd == INT32_MAX or evn > odd) YES;
  else NO;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t; cin >> t; while(t--)
    solve();
  return 0;
}
