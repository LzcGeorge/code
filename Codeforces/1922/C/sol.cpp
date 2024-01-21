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
    vector<int> a(n+1);
    vector<ll> b(n+1,0),c(n+1,0);
    for(int i = 1; i <= n; i ++) cin >> a[i];
    b[2] = 1;
    for(int i = 3; i <= n; i ++) {
        if(a[i] - a[i-1] < a[i-1] - a[i-2]) {
            b[i] = b[i-1] + 1;
        } else {
            b[i] = b[i-1] + a[i] - a[i-1];
        }
    }
    c[n-1] = 1;
    for(int i = n - 2; i >= 0; i --) {
        if(a[i+1] - a[i] < a[i+2] - a[i+1] )
            c[i] = c[i+1] + 1;
        else 
            c[i] = c[i+1] + a[i+1] - a[i];
    }
    int m;
    cin >> m;
    while(m --) {
        int x,y;
        cin >> x >> y;
        if(x < y)
            cout << b[y] - b[x] << "\n";
        else 
            cout << c[y] - c[x] << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}