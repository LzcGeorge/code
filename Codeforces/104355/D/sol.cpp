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
const int N = 1e6+10;
const int mod = 1e9 + 7;
// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    int w = 0, s = 0, a = 0, d = 0;
    bool f = false;

    for(int i = 0; i < n; i ++) {
        int x,y;
        cin >> x >> y;
        if(x == 0 and y == 0) f = true;
        if(x < 0) a = max(-1*x,a);
        else d = max(d,x);
        if(y < 0) s = max(-1*y,s);
        else w = max(w,y);
    }
    // cout << (w + s + 1) * (a + d) << "\n";
    if(f and ((w + s + 1) * (a + d + 1) == n)) {
        cout << w + s + a + d;
    } else {
        cout << "-1";
    }
    // assert(w == s and w == a and w == d);
    // cout << w << s << a  << d;
    // if(n < 4) cout << "-1";
    // else if(n == 4) {
    //     if(w == 1 and w == s and w == a and w == d) cout << "1";
    //     else cout << "-1";
    // } 
    // else cout << w + s + a + d;
    // cout << "cuole ";
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}