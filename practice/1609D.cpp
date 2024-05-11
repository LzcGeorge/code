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

/*
在考虑前面 i 个条件时，能构造出的由 i 条边构成的图的最大度数点的度数

我们接下来考虑的就是最大连通块可以有多大。我们先使用并查集等方式，把不得不连通的块连起来。对于每个大小为 size 连通块，只需要 
size - 1 条边就可以保证其连通关系，因此会有剩余的边，即考虑连通关系时发现之前两点已经连通。

如果边数有剩余，设剩下了 m 条边，那么我们可以把 m + 1个连通块合并起来形成一个大连通块。这时，只要选取的连通块是最大的，构造的大连通块就也是最大的。
*/
void solve()
{
    int n,q;
    cin >> n >> q;
    DSU dsu(n);
    int cnt = 0;
    for(int i = 0; i < q; i ++) {
        int x,y;
        cin >> x >> y;
        x -- , y --;
        if(!dsu.merge(x,y)) cnt ++;

        vector<int> g;
        for(int j = 0; j < n; j ++)
            if(j == dsu.find(j))
                g.push_back(dsu.size(j));
        sort(g.begin(),g.end(),greater<>());
        int res = 0;
        for(int j = 0; j <= cnt; j ++) res += g[j];
            cout << res - 1 << "\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}