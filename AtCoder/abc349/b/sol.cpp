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
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto c: s) mp[c] ++;
    map<int,vector<char>> ct;
    for(auto [c,cnt]: mp) {
        ct[cnt].push_back(c);
    }

    for(int i = 1; i <= s.size(); i ++) {
        if(ct[i].size() != 0 and ct[i].size() != 2) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}