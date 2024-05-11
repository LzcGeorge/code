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
    int n,m;
    cin >> n >> m;

    vector<vector<int>> a(m);
    vector<int> c(m);
    for(int i = 0; i < m; i ++) {
        int k;
        cin >> k >> c[i];
        a[i].resize(k);
        for(int j = 0; j < k; j ++) {
            cin >> a[i][j];
            a[i][j] --;
        }
    }

    ll res = 0;
    std::vector<int> p(m);
    std::iota(p.begin(), p.end(), 0);
    std::sort(p.begin(), p.end(),
        [&](int i, int j) {
            return c[i] < c[j];
        });

    DSU dsu(n);
    int t = n;
    // 保证从小到大枚举边权
    for(auto i: p) {
        for(int j = 1; j < a[i].size(); j ++) {
            if(dsu.merge(a[i][j - 1],a[i][j])) {
                res += c[i];
                t --;
            }
        }
    }
    if(t > 1) res = -1;
    cout << res ;
    
 }

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}