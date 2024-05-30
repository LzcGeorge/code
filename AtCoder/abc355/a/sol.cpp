#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int a,b;
    cin >> a >> b;
    if(a > b) swap(a,b);
    if(a == 1 and b == 2) cout << "3";
    else if(a == 1 and b == 3 ) cout << "2";
    else if(a == 2 and b == 3 ) cout << "1";
    else cout << "-1";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}