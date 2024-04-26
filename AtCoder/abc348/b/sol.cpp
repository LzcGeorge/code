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
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i ++) {
        int x,y;
        cin >> x >> y;
        a[i] = {x,y};
    }

    auto op = [&](int x,int y) -> double {
        double xa = 1.0 * (a[x].first - a[y].first) * (a[x].first - a[y].first);
        double xb = 1.0 * (a[x].second - a[y].second) * (a[x].second - a[y].second);
        return xa + xb;
    };
    for(int i = 0; i < n; i ++) {
        int t = -1;
        double mx = -1e13;
        for(int j = 0; j < n; j ++) {
            if(i != j) {
                if(mx < op(i,j)) {
                    mx = op(i,j);
                    t = j;
                }
            }
        }
        cout << t + 1 << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}