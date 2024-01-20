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
    // 找更大的或更小的来匹配最大差值
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    int bl = 0,br = m - 1;
    int al = 0,ar = n - 1;
    ll res = 0;
    while(al <= ar) {
        if(abs(a[al] - b[br]) >= abs(a[ar] - b[bl])) {
            res += abs(a[al] - b[br]);
            al ++,br --;
        }else {
            res += abs(a[ar] - b[bl]);
            ar --,bl ++;
        }
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