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
    vector<int> a(n),b(n);
    for(auto &it: a) cin >> it;
    for(auto &it: b) cin >> it;

    int pos = 0;
    for(int i = 0; i < n; i ++) {
        a[i] -= b[i];
        if(a[i] > a[pos]) pos = i;
    }

    vector<int> res;
    for(int i = 0; i < n; i ++) 
        if(a[i] == a[pos])
            res.push_back(i+1);
    cout << res.size() << "\n";
    for(auto c: res) cout << c << " ";
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