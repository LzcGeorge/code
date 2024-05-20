#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,m;
    cin >> n >> m;
    
    vector<vector<int>> w(n,vector<int>(m,0));
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            cin >> w[i][j];
    
    // 01 背包
    vector<int> f(m + 1,0);
    for(int i = 0; i < n; i ++)
        for(int j = m; j >= 0; j --)
        {
            // 有 k 中选择
            for(int k = 1; k <= j; k ++) 
                f[j] = max(f[j],f[j - k] + w[i][k-1]); // k 个物品的价值是 w[i][k-1]
        }

    cout << f[m];
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}