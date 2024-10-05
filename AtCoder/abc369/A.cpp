#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    // q - p = r - q 
    // p + r = 2 q
    int A,B;
    cin >> A >> B;
    if(A == B) {
        cout << "1\n";
    } else {
        if((A + B)% 2 == 0) {
            cout << "3\n";
        } else {
            cout << "2\n";
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}