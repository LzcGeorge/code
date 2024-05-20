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
    DSU dsu(n);
    for(int i = 0; i < n; i ++) {
        int x,y;
        cin >> x >> y;
        x --,y --;
        if(dsu.find(x) != dsu.find(y)) {
            if(dsu.size(x) >= dsu.size(y)) {
                dsu.merge(x,y);
            } else {
                dsu.merge(y,x);
            }
        } 
    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}