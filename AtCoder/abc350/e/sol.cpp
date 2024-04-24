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
const int N = 1e6+10;
const int mod = 1e9 + 7;
// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    ll n,a,x,y;
    cin >> n >> a >> x >> y;
    
    map<ll,double> mp;
    
    auto dp = [&](auto& self,ll m) -> double {
        if(m > n) return 0;
        if(mp.count(m)) return mp[m];
        double res = self(self,m*a) + x;
        double t = 0;
        for(int i = 2; i <= 6; i ++) {
            t += self(self, m * i);
        }
        t += 6ll * y;
        t /= 5.0;
        res = min(t,res);
        return mp[m] = res; 
    };
    cout << fixed << setprecision(20);
    cout << dp(dp,1);
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}