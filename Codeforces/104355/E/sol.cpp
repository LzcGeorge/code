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
    double b;
    cin >> n >> b;
    // cout << b << "\n";
    vector<int> fav(n,0);
    double x;
    int cnt = 0;
    for(int i = 0; i < n; i ++) {
        double mx = -5;
        int fv = -1;
        for(int j = 0; j < n; j ++) {
            cin >> x;
            // cout << x;
            if(x >= b and i != j) {
                mx = max(mx,x);
            }
            if(mx == x) fv = j;
        }
        // cout << "\n";
        if(fv != -1) fav[fv] ++,cnt ++;
    }
    
    // one person
    if(n == 1) {
        cout << "kono jinsei, imi ga nai!\n";
        return;
    }
    // 检查一下每个人是不是只有一个喜欢的,如果有多个喜欢的话，则一定会落单
    for(int i = 0; i < n; i ++) {
        if(fav[i] != 1) {
            cout << "hbxql\n";
            return;
        }
    }
    cout << "wish you the best in your search\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}