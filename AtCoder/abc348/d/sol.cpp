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
const int N = 210;
const int mod = 1e9 + 7;
// 答案/构造 是从样例中推出来的，不是猜出来的

char a[N][N];
int e[N][N];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

void solve()
{
    int n,m;
    cin >> n >> m;
    int sx = -1,sy = -1,gx = -1,gy = -1;
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        for(int j = 0; j < m; j ++) {
            if(a[i][j] == 'S') {
                sx = i;
                sy = j;
            }
            if(a[i][j] == 'T') {
                gx = i;
                gy = j;
            }
        }
    } 


    int q;
    cin >> q;
    for(int i = 0; i < q; i ++) {
        int r,c,x;
        cin >> r >> c >> x;
        r --,c --;
        e[r][c] = x;
    }

    vector<vector<int>> f(n,vector<int>(m,-1));
    f[sx][sy] = 0;
    queue<pair<int,int>> que;
    que.push({sx,sy});
    while(que.size()) {
        auto [fx,fy] = que.front(); que.pop();

        int nd = max(f[fx][fy],e[fx][fy]);
        if(nd <= 0) continue;

        for(int i = 0; i < 4; i ++) {
            int nx = fx + dx[i],ny = fy + dy[i];
            if(nx < 0 or ny < 0 or nx >= n or ny >= m or a[nx][ny] == '#') {
                continue;
            }

            if(f[nx][ny] < nd - 1) {
                f[nx][ny] = nd - 1;
                que.push({nx,ny});
            }
        }
    }
    if(f[gx][gy] == -1) cout << "No";
    else cout << "Yes";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;

    // cin  >> T;
    while (T--)
        solve();
}