#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    ull L,R;
    cin >> L >> R;
    ull res = 0;
    for(int i = 0; i < 64; i ++) {
        if((1ull << i) - 1 >= R) {
            res = i;
            break;
        }
        // (1ull << i) - 1 表示前 i 个物品的总重量 
    }
    ull sum = (1ull << res) - 1;
    if(sum >= L and sum <= R) {
        cout << res << "\n";
        return;
    }
    int cnt = res;
    for(int i = 63; i >= 1; i --) {
        if(sum >(1ull << (i-1)) and sum - (1ull << (i-1)) > R) {
            sum -= (1ull << (i-1));
            // cout << (1ull << (i-1)) << "\n";
            cnt --;
        } else if(sum - (1ull << (i-1)) >= L and sum - (1ull << (i-1)) <= R) {
            cout << cnt - 1 << "\n";
            return;
        }
        if(sum >= L and sum <= R) {
            cout << cnt << "\n";
            return;
        }
        
    }
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}