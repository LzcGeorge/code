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
    vector<int> a(n+1),pos(n+1);
    for(int i = 1; i <= n; i ++) cin >> a[i],pos[a[i]] = i;

    vector<pair<int,int>> res;

    for(int i = 1; i <= n; i ++) {
        if(i != a[i]) {
            int x = a[i];
            int p = pos[i];
            // 从前向后便利，保证 p 一定大于 i
            res.push_back({i,p});
            swap(a[i],a[p]);
            pos[i] = i;
            pos[x] = p;
        }
    }

    cout << res.size() << "\n";
    for(auto [a,b]: res) {
        cout << a << " " << b << "\n";
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