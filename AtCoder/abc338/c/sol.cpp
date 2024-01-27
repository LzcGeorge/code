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

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int n;
    cin >> n;
    vector<int> q(n),a(n),b(n);
    for(auto &x: q) cin >> x;
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    int res = 0;
    for(int x = 0; ; x ++) {
        bool f = true;
        int mi = inf;
        for(int i = 0; i < n; i ++) {
            int r = q[i] - x * a[i];
            if(r < 0) f = false;
            if(b[i] != 0)
                mi = min(mi,r / b[i]);
        }
        if(f) res = max(res,mi + x);
        else break;
    }
    cout << res;
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}