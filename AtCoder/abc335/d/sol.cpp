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
int a[50][50];
void solve()
{
    int n;
    cin >> n;
    int dx[] = {0,1,0,-1};
    int dy[] = {1,0,-1,0};
    int dv = 0;
    int x = 0, y = 0;
    int cur = 1;
    int c = n + 1 >> 1;
    c --;
    for(int i = 0; i < n*n; i ++) {
        int level = min({x,y,n-x-1,n-y-1});
        a[x][y] = cur;
        if(x == c and y == c) {

        } else {
            cur ++;
        }
        if(dv == 0 and y == n - level - 1) dv = 1;
        else if(dv == 1 and x == n - level - 1) dv = 2;
        else if(dv == 2 and y == level) dv = 3;
        else if(dv == 3 and x == level + 1) dv = 0;

        x = x + dx[dv];
        y = y + dy[dv];
        
    }

    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++) {
            if(i == c and j == c) cout << "T ";
            else cout << a[i][j] << " ";
        }
        cout << "\n";
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