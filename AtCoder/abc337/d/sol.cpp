#include <bits/stdc++.h>

const int inf = 0x3f3f3f3f;
using i64 = long long;

void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<std::string> S(n);
    for (int i = 0; i < n; ++i) {
    	std::cin >> S[i];
    }

    int res = inf;
    if (k <= m) {
    	for (auto s : S) {
    		std::deque<char> q;
            int cnt = 0;
    		for (auto c : s) {
                q.push_back(c);
    			if(c == 'x') {
                    q.clear();
                    cnt = 0;
                } else if(c == 'o') {
                    cnt += 1;
                } 

                if(q.size() == k) {
                    res = std::min(res,k - cnt);
                    cnt -= (q.front() == 'o');
                    q.pop_front();
                }
    		}
	    	
    	}
    }
    if (k <= n) {
    	for (int i = 0; i < m; ++i) {
    		std::deque<char> q;
            int cnt = 0;
    		for (int j = 0; j < n; ++j) {
                char c = S[j][i];
    			q.push_back(c);
    			if(c == 'x') {
                    q.clear();
                    cnt = 0;
                } else if(c == 'o') {
                    cnt += 1;
                } 

                if(q.size() == k) {
                    res = std::min(res,k - cnt);
                    cnt -= (q.front() == 'o');
                    q.pop_front();
                }
    		}
    	}
    }
    if (res == inf) res = -1;
    std::cout << res << "\n";
}

int main() {
    std::cin.sync_with_stdio(false);
    std::cin.tie(0);
    
    solve();

    return 0;
}
