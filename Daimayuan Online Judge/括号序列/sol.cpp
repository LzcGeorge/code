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
const int N = 510;
const int mod = 1e9 + 7;
// 答案/构造 是从样例中推出来的，不是猜出来的

int n,f[N][N];
char s[N];
void solve()
{
    cin >> n >> s + 1;

    memset(f,0,sizeof(f));
    for(int i = 1; i < n; i ++) 
        for(int j = 1; j <= n - i; j ++) {
            if((s[j] == '(' && s[j + i] == ')') ||
                s[j] == '[' && s[j + i] == ']')
                f[j][j + i] = f[j + 1][j + i - 1] + 2;
            
            for(int k = j; k < j + i; k ++)
                f[j][j + i] = max(f[j][j + i], f[j][k] + f[k + 1][j + i]);
        }
    
    cout << f[1][n];

    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}