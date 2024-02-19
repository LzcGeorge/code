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
int f[N],v[N],w[N];
void solve()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
        cin >> v[i] >> w[i];
    // f[i][j] = f[i][j - v[i]]
    for(int i = 1; i <= n; i ++)
        for(int j = v[i]; j <= m; j ++)
            f[j] = max(f[j],f[j - v[i]] + w[i]);
    cout << f[m];
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}