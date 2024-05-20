#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    
    vector<vector<int>> g(n);
    for(int i = 1; i < n; i ++) {
        int x;
        cin >> x;
        x --;
        g[x].push_back(i);
    }

    vector<int> f(n,1);
    function<void(int)> dfs = [&](int x) -> void {
        for(auto v: g[x]) {
            dfs(v);
            f[x] += f[v];
        }
    };
    dfs(0);
    
    for(int i = 0; i < n; i ++) cout << f[i] << " \n"[i == n - 1];
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}