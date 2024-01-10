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
    map<int,int> mp;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        mp[x] ++;
    }
    int q;
    cin >> q;
    while(q --) {
        ll x,y;
        cin >> x >> y;
        if(x*x - 4*y < 0) {
            cout << "0\n";
            continue;
        } 
        if(x*x - 4*y == 0 ) {
            if(x%2 == 1) cout << "0 ";
            else 
                cout << 1ll * mp[x / 2] * (mp[x / 2] - 1) / 2 << " ";
            continue;
        }

        ll t = sqrt(x*x - 4*y);
        if(t*t != x*x - 4*y || (x+t)%2 == 1) {
            cout << "0 ";
            continue;
        }

        ll a = (x+t)/2,b = (x-t)/2;
        cout << 1ll * mp[a]*mp[b] << " ";
    }
    cout << "\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}