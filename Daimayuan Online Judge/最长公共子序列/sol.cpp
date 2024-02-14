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
const int N = 1010,M = 5e5;

// 答案/构造 是从样例中推出来的，不是猜出来的
int a[N],b[N],f[N][N];
void solve()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++) cin >> a[i];
    for(int i = 1; i <= m; i ++) cin >> b[i];

    for(int i = 1; i <= n; i ++) {
        for(int j = 1; j <= m; j ++) {
            f[i][j] = max(f[i-1][j],f[i][j-1]);
            if(a[i] == b[j])
                f[i][j] = max(f[i][j],f[i-1][j-1] + 1);
        }
    }
    cout << f[n][m];
} 

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}