#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    std::ios::sync_with_stdio(0),std::cin.tie(0);

	string s,t;
	cin >> s >> t;

	// 最长公共子序列
	int n = s.size(), m = t.size();
	vector<vector<int>> f(n + 1,vector<int>(m + 1,-1));
	auto dp = [&](auto self,int i,int j) -> int {
		if(i < 0 || j < 0) return 0;

		if(f[i][j] != - 1) return f[i][j];

		if(s[i] == t[j]) 
			return f[i][j] = self(self,i - 1, j - 1) + 1;
			

		return f[i][j] = max(self(self,i - 1,j),self(self,i,j - 1));
	};		

	dp(dp,n - 1,m - 1);

	string res = "";
	int i = n - 1,j = m - 1;
	while(f[i][j] > 0) {
		if(s[i] == t[j]) {
			if(f[i][j] == 1) {
				res.push_back(s[i]);
				break;
			} else if(f[i][j] == f[i - 1][j - 1] + 1) {
				res.push_back(s[i]);
				i --, j --;
			}
		} else if(i >= 1 and f[i][j] == f[i - 1][j]) i --;
		else j --;
	}
	
	reverse(res.begin(),res.end());
	cout << res << "\n";
	return 0;
}