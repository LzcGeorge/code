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
const int N = 2010,M = 5e5;

// 答案/构造 是从样例中推出来的，不是猜出来的
int f[N],v[N],w[N],l[N];
void solve()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i ++)
        cin >> v[i] >> w[i] >> l[i];
    // 拆成 01 背包
    for(int i = 1; i <= n; i ++) {
        int res = l[i];
        // 1 2 4 8 等二进制的背包
        for(int k = 1; k <= res; res -= k,k *= 2) {
            for(int j = m; j >= v[i] * k; j --) 
                f[j] = max(f[j],f[j - v[i] * k] + w[i] * k);
        }
        // 剩余的背包
        for(int j = m; j >= v[i] * res; j --) 
            f[j] = max(f[j],f[j - v[i] * res]+ w[i] * res);
    }
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