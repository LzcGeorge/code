#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
struct DSU {
    std::vector<int> f, siz;
    DSU() {}
    DSU(int n) {
        init(n);
    }
    
    void init(int n) {
        f.resize(n);
        std::iota(f.begin(), f.end(), 0);
        siz.assign(n, 1);
    }
    
    int find(int x) {
        while (x != f[x]) {
            x = f[x] = f[f[x]];
        }
        return x;
    }
    
    bool same(int x, int y) {
        return find(x) == find(y);
    }
    
    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        f[y] = x;
        return true;
    }
    
    int size(int x) {
        return siz[find(x)];
    }
};

void solve()
{
    int n,q;
    cin >> n >> q;

    vector dsu(11,DSU(n));
    vector cnt(11,n);
    for(int i = 1; i < n; i ++) {
        int a,b,c;
        cin >> a >> b >> c;
        a --, b --;
        for(int j = c; j <= 10; j ++)
            cnt[j] -= dsu[j].merge(a,b);
    }

    while(q --) {
        int u,v,w;
        cin >> u >> v >> w;
        u  --, v --;
        for(int j = w; j <= 10; j ++) 
            cnt[j] -= dsu[j].merge(u,v);
        
        int res = 0;
        int lst = n;
        for(int j = 1; j <= 10; j ++) {
            res += j * (lst - cnt[j]);
            lst  = cnt[j];
        }
        cout << res << "\n";
    }

    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}