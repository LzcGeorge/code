#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

int s[310][310],f[310][310];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
void solve()
{
    int n,m;
    cin >> n >> m;

    int x0,y0;
    cin >> x0 >> y0;
    x0 --, y0 --;

    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            cin >> s[i][j];

    memset(f,-1,sizeof f);
    queue<array<int,3>> q;
    q.push({x0,y0,0});
    f[x0][y0] = 0;
    while(q.size()) {
        auto [x,y,v] = q.front();
        q.pop();
        for(int i = 0; i < 4; i ++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(f[nx][ny] != -1) continue;
            if(s[nx][ny] > s[x][y]) {
                q.push({nx,ny,v + 1});
                f[nx][ny] = v + 1;
            }
        }
    }
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++) 
            cout << f[i][j] << " \n"[j == m - 1];
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}