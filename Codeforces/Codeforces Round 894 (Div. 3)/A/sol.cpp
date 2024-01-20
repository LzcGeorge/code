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
    int n,m;
    cin >> n >> m;
    char a[25][25];
    for(int i = 0; i < n; i ++) cin >> a[i];

    vector<string> s(m);
    for(int j = 0; j < m; j ++) {
        string t = "";
        for(int i = 0; i < n; i ++) t += a[i][j];
        s[j] = t;
    }
    string vv = "vika";
    bool f = true;
    int cnt = 0;
    for(int j = 0; j < m; j ++) {
        if(s[j].find(vv[cnt]) != std::string::npos) cnt ++;
        if(cnt == 4) {
            cout <<"YES\n";
            return;
        }
        
    }
    cout << "NO\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    cin  >> T;
    while (T--)
        solve();
}