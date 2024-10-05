#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int N,A,T;
    cin >> N >> A >> T;
    if(A > N - A or T > N - T) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}