    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;
    #define eb emplace_back
    #define pb push_back
    #define DE cout << "-----------\n"

    const int N = 2e5,M = 5e5;

    void solve()
    {   
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto& it: a) cin >> it;

        int t = 1;
        for(auto c: a) {
            if(2023%c != 0) {
                cout << "NO\n";
                return;
            } 
            t *= c;
        }
        if(2023%t != 0) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        cout << 2023/t << " ";
        k--;
        while(k --) {
            cout << 1 << " ";
        }
        cout << "\n";




    }                     


    int main()
    {
        std::ios::sync_with_stdio(0),std::cin.tie(0);
        ll T = 1;

        cin  >> T;
        while (T--)
            solve();
    }