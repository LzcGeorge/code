#include <bits/stdc++.h>
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    for(int i = 0; i < N; i ++) std::cin >> A[i];

    auto f = [](long long x) {
        return x * (x + 1)/2;
    };

    long long pre = 0,res = N;
    for(int i = 1; i < N - 1; i ++) {
        if(A[i] - A[i - 1] != A[i + 1] - A[i]) {
            res += f(i - pre); // C(n + 1, 2)
            pre = i;
        }
    }
    res += f(N - 1 - pre); // 最后一段。
    std::cout << res << "\n";
}   
 
int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}
