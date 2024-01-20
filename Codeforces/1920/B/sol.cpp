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
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> a(n);
    
    ll sum = 0;
    for(auto &it: a) cin >> it,sum += it;
    sort(a.begin(),a.end(),greater<>());
    ll neg = 0;
    for(int i = 0; i < x; i ++) neg += a[i];
    ll res = sum - 2*neg;
    for(int i = 0; i < k; i ++) {
        if(i + x < n) neg = neg - a[i] + a[i+x];
        else neg = neg - a[i];
        sum -= a[i];
        res = max(res, sum - 2*neg);
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