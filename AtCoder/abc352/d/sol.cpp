#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> p(n);

    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        x --;
        p[x] = i;
    }

    int res = n;
    set<int> s;
    // 记录每个数的位置。
    // k 个数中最大的位置减去最小的位置就是结果。
    for(int i = 0; i < n; i ++) {
        s.insert(p[i]);
        if(i >= k) s.erase(p[i - k]);
        if(i >= k - 1) {
            res = min(res,*s.rbegin() - *s.begin());
        }
    }
    cout << res;

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}