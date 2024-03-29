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
    string s;
    cin >> s;
    s = '0' +s;
    int k = s.size();
    for(int i = s.size() - 1; i >= 0; i --) {
        if(s[i] >= '5') s[i-1] ++,k = i;
    }
    for(int i = (int)(s[0] == '0'); i < s.size(); i ++) {
        if(i >= k) cout << '0';
        else cout << s[i];
    }
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