	#include <bits/stdc++.h>
	using namespace std;
	using ll = long long;

	int main()
	{
	    std::ios::sync_with_stdio(0),std::cin.tie(0);

		int n,k;
		cin >> n;
		vector<int> a(n);
		for(auto& x: a) cin >> x;

		// 最长上升子序列
		vector<int> f;
		int res = 1;
		for(int i = 0; i < n; i ++) {
			int l = 0,r = f.size();
			while(l < r) {
				int mid = l + r >> 1;
				if(f[mid] >= a[i]) r = mid;
				else l = mid + 1;
			}
			if(l == f.size())
				f.push_back(a[i]);
			else 
				f[l] = a[i];
			res = max(res, l + 1);

		}

		cout << res << "\n";
		return 0;
	}