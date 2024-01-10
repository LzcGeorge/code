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

const int N = 2e5,M = 5e5;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a) cin >> it;

    int mx = a[0],sum = a[0];
    for(int i = 1; i < n; i ++) {
        if(sum < 0 || abs(a[i-1])%2 == abs(a[i])%2) {
            sum = a[i];
        } else {
            sum += a[i];
        }
        mx = max(sum,mx);
    }
    cout << mx << "\n";
    // debug(mx);
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}