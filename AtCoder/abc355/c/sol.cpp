#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的


void solve()
{
    int n,t;
    cin >> n >> t;
    map<int,int> row,col;
    int tl = 0, tr = 0,mr = 0, mc = 0;
    for(int i = 1; i <= t; i ++) {
        int s;
        cin >> s;
        s -= 1;
        int x = s/n, y = s % n;
        row[x] += 1;
        mr = max(row[x],mr);
        col[y] += 1;
        mc = max(col[y],mc);
        if(x == y) tl += 1;
        if(x + y == n - 1) tr += 1;
        if(max({tl,tr,mc,mr}) == n) {
            cout << i;
            return;
        }
        
    }
    cout << "-1\n";
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}