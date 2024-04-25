#include <bits/stdc++.h>
using namespace std;

#define debug(x...)                                                            \
  do {                                                                         \
    cout << "\033[32;1m" << #x << " -> ";                                      \
    rd_debug(x);                                                               \
  } while (0)

void rd_debug() { cout << "\033[39;0m" << endl; }

template <class T, class... Ts> void rd_debug(const T &arg, const Ts &...args) {
  cout << arg << " ";
  rd_debug(args...);
}

using ll = long long;
#define eb emplace_back
#define pb push_back
#define DE cout << "-----------\n"

const int inf = 0x3f3f3f3f;
const int N = 1e6+10;
const int mod = 1e9 + 7;
// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    ll l,r;
    cin >> l >> r;
    vector<pair<ll,ll>> res;
    while(l < r) {
      for(int i = 60; i >= 0; i --) {
        ll w = 1ll << i;
        if(l % w == 0 and l + w <= r) {
          res.emplace_back(l,l + w);
          l += w;
          break;
        }
      }
    }
    cout << res.size() << "\n";
    for(auto [a,b]: res) 
        cout << a << " " << b << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}