#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    int a = min(x,y);
    int b = max(x,y);
    if(z <= b and z >= a) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}