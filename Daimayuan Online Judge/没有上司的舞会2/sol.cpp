#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>> g(n);
    vector<int> a(n);
    for(int i = 1; i < n; i ++) {
        int x;
        cin >> x;
        x --;
        g[x].push_back(i);
    }
    for(auto& x: a) cin >> x;

    int f[501][501][2]{0};
    function<void(int)> dfs = [&](int x) -> void {
        for(auto& y: g[x]) {
            dfs(y);
            for(int j = m; j >= 0; j --) {
                
                // k 中选择
                for(int k = 1; k <= j; k ++) {
                    f[x][j][0] = max(f[x][j][0], f[x][j - k][0] + max(f[y][k][0], f[y][k][1]));
                    f[x][j][1] = max(f[x][j][1], f[x][j - k][1] + f[y][k][0]);
                }
            }
        }
        // 加上 x 的快乐值
        for(int j = m; j >= 1; j --) f[x][j][1] = f[x][j-1][1] + a[x];
        f[x][0][1] = 0;
    };
    dfs(0);
    cout << max(f[0][m][0], f[0][m][1]);
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}