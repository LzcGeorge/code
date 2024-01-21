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
    vector<int> a(n);
    map<int,ll> mp;
    for(auto &x: a) {
        cin >> x;
        mp[x] ++;
    }

    // 三个不同的数不能构成三角形， 1 2 3 --》 2^1 + 2^2 < 2^2 + 2^2 = 2^3
    ll cnt = 0,res = 0;
    for(auto [k,v]: mp) {
        if(v >= 2) {
            res += v * (v - 1) / 2 * cnt;
        }
        if(v >= 3) {
            res += v * (v - 1) * (v - 2) / 6;
        }
        cnt += v;
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