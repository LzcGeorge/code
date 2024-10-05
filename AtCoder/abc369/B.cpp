#include <bits/stdc++.h>
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int N;
    std::cin >> N;
    int a = -1, b = -1,res = 0;

    for(int i = 0; i < N; i ++) {
        int x;
        char v;
        std::cin >> x >> v;
        if(v == 'L') {
            if(a != -1) res += abs(x - a);
            a = x;
        } else {
            if(b != -1) res += abs(x - b);
            b = x;
        }
    }
    std::cout << res << "\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}