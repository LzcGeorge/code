#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 答案/构造 是从样例中推出来的，不是猜出来的
void solve()
{
    int Q;
    cin >> Q;
    map<int,int> mp;
    while(Q --) {
        int op,x;
        cin >> op;
        if(op == 3) cout << mp.size() << "\n";
        if(op == 1) {
            cin >> x;
            mp[x] ++;
        } 
        if(op == 2) {
            cin >> x;
            if(mp[x] == 1) {
                mp.erase(x);
            } else {
                mp[x] --;
            }
        }
    }
    
}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}