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
int e[N][N],f[N];
void solve()
{
    int n,m;
    cin >> n >> m;
    memset(e,0x3f,sizeof e);
    memset(f,0x3f,sizeof f);
    for(int i = 0; i < m; i ++) {
        int x,y,z;
        cin >> x >> y >> z;
        e[x][y] = min(e[x][y],z);
    }

    f[1] = 0;
    for(int i = 2; i <= n; i ++) {
        for(int j = 1; j < i; j ++) {
            f[i] = min(f[i],f[j] + e[j][i]);
        }
    }
    cout << f[n];
} 

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}