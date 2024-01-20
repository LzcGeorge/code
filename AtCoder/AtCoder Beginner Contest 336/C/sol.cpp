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
    ll n;
    int a[6] = {0,2,4,6,8};
    cin >> n;
    string res = "";
    if(n == 1) {
        cout << "0\n";
    }
    --n;
    while(n) {
        int t = n % 5;
        res += a[t] + '0';
        // debug(res);
        n /= 5;
    }
    
    reverse(res.begin(),res.end());
    cout << res << "\n";
}

int main() 
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}