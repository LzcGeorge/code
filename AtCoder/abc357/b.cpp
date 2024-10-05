#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    string S;
    cin >> S;
    int a = 0, b = 0;
    for(auto c: S) {    
        if(c >= 'a' and c <= 'z') a ++;
        else b ++;
    }
    if(b > a) {
        for(auto c: S) {
            cout << toupper(c);
        }
    } else {
        for(auto c: S)
            cout << tolower(c);
    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}