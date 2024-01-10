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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto c: s) mp[c] ++;

    int t = 0;
    for(auto [c,cnt]: mp) {
        t += cnt/2;
    }
    
    int u = n - k;
    if(u%2 == 1) {
        if(2*t + 1 >= u) cout << "YES\n";
        else cout << "NO\n";
    } else {
        if(2*t >= u) cout << "YES\n";
        else cout << "NO\n";
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