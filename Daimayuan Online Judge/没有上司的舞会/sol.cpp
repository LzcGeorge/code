#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

// 让 递归 和 记录分开走

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    vector<int> a(n);
    for(int i = 1; i < n; i ++) {
        int x;
        cin >> x;
        x --;
        g[x].push_back(i);
    }

    for(auto& x: a) cin >> x;
   
    vector<vector<ll>> f(n,vector<ll>(2,0));    
    function<void(int)> dfs = [&](int x) -> void {
        f[x][1] = a[x];
        for(auto v: g[x]) {
            dfs(v);
            f[x][0] += max(f[v][0],f[v][1]);
            f[x][1] += f[v][0];
        }
    };
    dfs(0);
    
    cout << max(f[0][0],f[0][1]);
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}