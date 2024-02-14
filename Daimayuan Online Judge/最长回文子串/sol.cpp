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
int a[N],f[N][N];
void solve()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++) cin >> a[i];

    memset(f,0,sizeof(f));
    for(int i = 1; i <= n; i ++) f[i][i] = 1;

    int res = 1;
    // f[i][j] = f[i+1][j-1]: i 倒序，j 正序
    for(int i = n; i >= 1; i --) {
        for(int j = i; j <= n; j ++) {
            if(a[i] == a[j]) { // 向下递归
                if(j - 1 >= i + 1) { 
                    // aAa 这种情况
                    f[i][j] = f[i+1][j-1];
                } else {
                    // aa 这种情况
                    f[i][j] = 1;
                }
            }
            if(f[i][j] == 1) {
                res = max(res,j - i + 1);
            }
        }
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