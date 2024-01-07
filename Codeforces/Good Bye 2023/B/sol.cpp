    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;
    #define eb emplace_back
    #define pb push_back
    #define DE cout << "-----------\n"

    const int N = 2e5,M = 5e5;

    void solve()
    {   
        ll a,b;
        cin >> a >> b;
        
        if(b%a == 0) cout << b*b/a << "\n";
        else cout << a*b/gcd(a,b) << "\n";        

    }                     


    int main()
    {
        std::ios::sync_with_stdio(0),std::cin.tie(0);
        ll T = 1;

        cin  >> T;
        while (T--)
            solve();
    }