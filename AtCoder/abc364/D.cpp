#include <bits/stdc++.h>
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int N,Q;
    std::cin >> N >> Q;

    std::vector<int> a(N),b(Q),k(Q);
    for(auto& x: a) std::cin >> x;

    for(int i = 0; i < Q; i ++) {
        std::cin >> b[i] >> k[i];
    }       

    std::sort(a.begin(),a.end());

    for(int i = 0; i < Q; i ++) {
        int lo = 0,hi = 2E8;
        while(lo < hi) {
            int x = lo + hi >> 1;

            // 第k大距离: 距离为k时 [x-mid, x+mid] 刚刚有k个点
            int l = b[i] - x;   
            int r = b[i] + x;

            int cnt = std::upper_bound(a.begin(),a.end(),r) - std::lower_bound(a.begin(),a.end(),l);
            if(cnt >= k[i]) {
                hi = x;
            } else {
                lo = x+ 1;
            }
        }
        std::cout << lo << "\n";
    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}