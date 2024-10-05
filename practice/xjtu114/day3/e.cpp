#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

int s[2010][2010];
int f[2010][2010];
int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
void solve()
{
    int n,m;
    cin >> n >> m;

   
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++) {
            cin >> s[i][j];
        }

    
    int cur = 0;
    
    memset(f,-1,sizeof f);
    auto dp = [&](auto self,int x,int y) -> int{
        if(f[x][y] != -1) return f[x][y];

        int cur = s[x][y];
        for(int i = 0; i < 8; i ++) {
            int nx = x + dx[i], ny = y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if(s[nx][ny] < s[x][y]) {
                cur = max(cur,s[x][y] + self(self,nx,ny));
            }
        }
        return f[x][y] = cur;
    };

    int res = 0;
    for(int i = 0; i < n; i ++) 
        for(int j = 0; j < m; j ++) {
            res = max(res,dp(dp,i,j));
        }
    cout << res << "\n";

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}