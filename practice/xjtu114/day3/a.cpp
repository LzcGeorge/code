#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

// 答案/构造 是从样例中推出来的，不是猜出来的


void solve()
{
    int n;
    cin >> n;

    queue<pair<int,int>> q;
    unordered_set<int> st;

    q.push({1,0});
    st.insert(1);
    while(q.size()) {
        auto [x,v] = q.front();
        q.pop();
        if(x == n) {
            cout << v << "\n";
            return;
        }
        if(!st.count(2 * x) and 2 * x <= n) {
            q.push({2 * x,v + 1});
            st.insert(2 * x);
        }
        if(x - 1 >= 1 and !st.count(x - 1)) {
            q.push({x - 1,v + 1});
            st.insert(x - 1);
        }
        if(!st.count(x + 1) and x + 1 <= n) {
            q.push({x + 1,v + 1});
            st.insert(x + 1);
        }


    }

}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    solve();
}