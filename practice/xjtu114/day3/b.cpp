#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

int s[20][20],f[1 << 20][20];

void solve()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
            cin >> s[i][j];

    memset(f,0x3f,sizeof f);
    // 起点
    f[1][0] = 0;

    // 哈密顿路径
    for(int mask = 1; mask < (1 << n); mask ++) {
        for(int i = 0; i < n; i ++) {
            if(mask & (1 << i)) {
                for(int j = 0; j < n; j ++) {
                    if(i != j and (mask & (1 << j))) {
                        f[mask][i] = min(f[mask][i],f[mask ^ (1 << i)][j] + s[j][i]);
                    }
                }
            }
        }
    }

    // 访问完所有城市，返回起点
    int res = 1  << 30;
    for(int i = 1; i < n; i ++) {
        res = min(res,f[(1 << n) - 1][i] + s[i][0]);
    }
    cout << res << "\n";


}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}