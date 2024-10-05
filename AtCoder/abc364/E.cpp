#include <bits/stdc++.h>
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int N,X,Y;
    std::cin >> N >> X >> Y;

    std::vector f(N + 1, std::vector(N + 1, std::vector<int>(X + 1, 1e9)));
    f[0][0][0] = 0;

    for(int i = 0; i < N; i ++) {
        int a,b;
        std::cin >> a >> b;

        for(int j = 0; j < i; j ++)
            for(int k = 0; k <= X; k ++) {
                f[i + 1][j][k] = 
            }

    


    } 

    int res = 0;
    for(int i = 0; i < N; i ++)
        for(int x = 0; x <= X; x ++)
            if(f[i][x] <= Y)
                res = std::max(res, i + 1);

    std::cout << res << "\n";
}   


int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}