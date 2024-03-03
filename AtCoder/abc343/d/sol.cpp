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
const int N = 2e5+10,M = 5e5;

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int n,T;
    cin >> n >> T;
    map<ll,int> mp;
    mp[0] = n;
    vector<pair<int,int>> a(T);
    vector<ll> b(n+1,0);
    int res = 1;
    for(int i = 0; i < T; i ++) {
        int x,y;
        cin >> x >> y;
        a[i] = {x,y};
        if(mp[b[x] + y] == 0) res ++;
        if(mp[b[x]] == 1) res -- ;
        -- mp[b[x]], ++ mp[b[x] + y];
        b[x] += y;
        cout << res << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}