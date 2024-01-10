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
const int N = 2e5,M = 5e5;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll tn = n, tm = m;
    ll td = 1;
    while(tn % 10 == 0) {
      tn /= 10;
      td *= 10;
    }
    ll tq = 1;
    while(tn % 5 == 0 and tq * 2 <= m){
      tq *= 2;
      tn /= 5;
    }
    while(tn % 2 == 0 and tq * 5 <= m){
      tq *= 5;
      tn /= 2;
    }
    while(tq * 10 <= m) tq *= 10;
    if(tq == 1){
      cout << n * m << endl;
    }else{
      cout << tq * n * (m / tq) << endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}