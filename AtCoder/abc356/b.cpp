#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    std::vector<int> a(m),b(m,0);
    for(auto& x: a) cin >> x;

    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            int x;
            cin >> x;
            b[j] += x;
        }
    }
    for(int i = 0; i < m; i ++) {
        if(b[i] < a[i]) {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}