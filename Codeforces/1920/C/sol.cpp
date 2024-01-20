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
    // 每个分组对应位置的余数相同 --》 两个数相减能被 m 整除 --》两个数相减存在公因数。
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i ++) cin >> a[i];

    int res = 0;
    // n 的因数的个数大概是 sqrt n ，总复杂度 = (sqrt n) * n
    for(int k = 1; k <= n; k ++) {
        if(n % k == 0) {
            int g = 0;
            for(int i = 0; i < k; i ++) {
                for(int j = i + k; j < n; j += k) {
                    g = gcd(a[j] - a[j - k],g);
                }
            }
            // 两种写法等价
            // for(int i = k; i < n; i ++) 
            //     g = gcd(a[i] - a[i- k] ,g );
            res += (g != 1);
        }
    }
    cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}