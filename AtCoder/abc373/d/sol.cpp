#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
const int N = 1e6;
vector<pair<ll,ll>> e[N];

void solve()
{
    int n,m;
    cin >> n >> m;
    
    vector<ll> x(n,0);
    vector<bool> st(n,0);
    for(int i = 0; i < m; i ++) {
        int u,v,w;
        cin >> u >> v >> w;
        u --,v --;
        e[u].push_back({v,w});
    }

    for(int i = 0; i < n; i ++) {
        if(st[i]) continue;
        st[i] = true;
        queue<int> q;
        q.push(i);
        while(q.size()) {
            int u = q.front();
            q.pop();
            for(auto [v,w]: e[u]) {
                if(st[v]) continue;
                q.push(v);
                st[v] = true;
                x[v] = x[u] + w;
            }
        }
    }
    for(int i = 0; i < n; i ++) cout << x[i] << " ";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}