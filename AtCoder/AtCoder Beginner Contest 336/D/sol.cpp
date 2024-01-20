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
    vector<int> a(n),l(n),r(n);
    for(auto &x: a) cin >> x;
    l[0] = 1, r[n-1] = 1;

    for(int i = 1; i < n; i ++) 
        l[i] = min(l[i-1] + 1,a[i]);
    
    for(int i = n-2; i >= 0; i --)
        r[i] = min(r[i+1] + 1,a[i]);
    
    int res = 0;
    for(int i = 0; i < n; i ++)
        res = max(res,min(l[i],r[i]));
    cout << res << "\n";
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}