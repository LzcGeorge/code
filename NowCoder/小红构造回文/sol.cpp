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
    string s;
    cin >> s;
    char cur = s[0],nw;
    int n = s.size();
    map<char,int> mp;
    for(int i = 0; i < n; i ++) {
        mp[s[i]] ++;
    }
    int t = 0;
    bool f = true;
    for(auto [c,cnt]: mp) {
        if(cnt >= 2) {
            t += 1;
            if(c != cur) nw = c;
        }
    }
    if(t < 2) cout << "-1\n";
    else {
        cout << nw;
        int c = 2;
        for(int i = 1; i < n; i ++) {
            if(s[i] == nw) {
                s[i] = cur;
                s[n-1-i] = cur;
                break;
            }
        }
        for(int i = 1; i < n-1; i ++) cout << s[i];
        cout << nw;
    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}