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
    		int cnt = 0;
    		std::queue<char> q;
    		for (auto c : s) {
    			if (q.size() == k) {
    				res = std::min(res, k - cnt);
    				if (q.front() == 'o') cnt--;
    				q.pop();
    			}
    			if (c == 'x') {
    				while (!q.empty()) q.pop();
    				cnt = 0;
    			} else if (c == '.') {
    				q.push('.');
    			} else {
    				cnt++;
    				q.push('o');
    			}
    		}
	    	if (q.size() == k) {
	    		res = std::min(res, k - cnt);
	    	}
    	}
    }
    if (k <= n) {
    	for (int i = 0; i < m; ++i) {
    		int cnt = 0;
    		std::queue<char> q;
    		for (int j = 0; j < n; ++j) {
    			if (q.size() == k) {
    				res = std::min(res, k - cnt);
    				if (q.front() == 'o') cnt--;
    				q.pop();
    			}
    			if (S[j][i] == 'x') {
    				while (!q.empty()) q.pop();
    				cnt = 0;
    			} else if (S[j][i] == '.') {
    				q.push('.');
    			} else {
    				cnt++;
    				q.push('o');
    			}
    		}
   	    	if (q.size() == k) {
	    		res = std::min(res, k - cnt);
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
