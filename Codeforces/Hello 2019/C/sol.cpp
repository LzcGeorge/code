#include <bits/stdc++.h>
using namespace std;

#define debug(x...)                                                            \
  do {                                                                         \
    cout << "\033[32;1m" << #x << " -> ";                                      \
    rd_debug(x);                                                               \
  } while (0)

void rd_debug() { cout << "\033[39;0m" << endl; }

template <class T, class... Ts> void rd_debug(const T &arg, const Ts &...args) {
  cout << arg << " ";
  rd_debug(args...);
}

using ll = long long;
#define eb emplace_back
#define pb push_back
#define DE cout << "-----------\n"

const int N = 2e5,M = 5e5;

void solve()
{
    int n;
    cin >> n;
    vector<string> a(n);
    for(auto &it: a) cin >> it;

    map<int,int> p,neg;
    int res = 0;
    for(auto s: a) {
        int t = 0;
        for(auto c: s) {
            if(c == '(') t ++;
            else t --;
            if(t < 0) break;
        }
        if(t == 0) res ++;
        else if(t > 0) p[t] ++;
    }
    for(auto s: a) {
        int t = 0;
        for(int i = s.size() - 1; i >= 0; i --) {
            if(s[i] == '(') t --;
            else t ++;
            if(t < 0) break;
        }
        // if(t == 0) res ++;
        if(t > 0) neg[t] ++;
    }
    res /= 2;
    for(auto s: a) {
        int t = 0;
        for(auto c: s) {
            if(c == '(') t ++;
            else t --;
            if(t < 0) break;
        }
        if(t > 0) {
            if(neg[t] > 0) {
                neg[t] --;
                p[t] --;
                res ++;
            }
        }
    }
    cout << res << "\n";


}

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);
    ll T = 1;
    
    // cin  >> T;
    while (T--)
        solve();
}