#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的

void solve()
{
    int n;
    cin >> n;
    string last;
    cin >> last;
    for(int i = 1; i < n - 1; i ++) {
        string s;
        cin >> s;
        if(s == "sweet" and s == last) {
            cout << "No\n";
            return;
        }
        last = s;
    }
    cout << "Yes\n";
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}