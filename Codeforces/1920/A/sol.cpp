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
    int mx = inf,mn = 0;
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i ++) {
        int id,x;
        cin >> id >> x;
        if(id == 1) mn = max(x,mn);
        else if(id == 2) mx = min(x,mx);
        else {
            mp[x] ++;
        }
    }
    // cout << mn << " " << mx << "\n";
    int res = mx - mn + 1;
    for(auto [c,cnt]: mp) {
        if(c >= mn and c <= mx) res --;
    }
    if(res < 0) cout << "0\n";
    else 
        cout << res << "\n";
    cout << "1\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}