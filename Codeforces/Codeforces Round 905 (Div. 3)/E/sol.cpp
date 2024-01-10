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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    ll res = 0,sum = 0;

    vector<ll> cnt(n,0);
    for(int i = 1; i < n; i ++) {
        ll l = a[i-1],r = a[i];
        cnt[i] = cnt[i-1];
        while(l < r) l *= 2,cnt[i] --; // 可能不需要那么多次操作就够了
        while(l > r) r *= 2,cnt[i] ++; // 需要在前面加的基础上在加几次
        cnt[i] = max(0LL,cnt[i]);
    }
    cout << accumulate(cnt.begin(),cnt.end() ,0LL) << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}