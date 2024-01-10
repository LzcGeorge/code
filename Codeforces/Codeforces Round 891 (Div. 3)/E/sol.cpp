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
    vector<pair<int,int>> a(n);
    ll last = 0,pre = 0;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        last += x;
        a[i] = {x,i};
    }
    sort(a.begin(),a.end());
    vector<ll> res(n);
    
    for(int i = 0; i < n; i ++) {
        auto [x,pos] = a[i];
        last -= x;
        if(i != 0) res[pos] += 1ll*i*x - pre + i;
        if(i != n-1) res[pos] += last - 1ll*x*(n-1-i)  + (n-1-i);
        // debug(res[pos]);
        pre += x;
        res[pos] += 1ll;

    }
    for(int i = 0; i < n; i ++) cout << res[i] << " ";
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