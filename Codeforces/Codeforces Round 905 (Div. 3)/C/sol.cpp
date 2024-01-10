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
    // 存在 k 这个数不就行
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x: a) cin >> x;

    if(k != 4) {
        int res = 1110;
        for(auto c: a) {
            int t = c / k;

            if(c%k != 0) t += 1;
            res = min(res,t*k - c);
        }
        cout << res << "\n";
    } else {
        int cnt = 0;
        for(auto c: a) {
            if(c % 4 == 0) cnt += 2;
            else if(c % 2 == 0) cnt += 1;
        }
        if(cnt >= 2) cout << "0\n";
        else if(cnt == 1){
            cout << "1\n";
        }else {
            // 1 3 -> 1
            // 1 1 -> 2
            int res = 2;
            for(auto c: a) {
                if(c % 4 == 3) res = 1;
            }
            cout << res << "\n";
        }
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