#include<bits/stdc++.h>
using namespace std;

int main()
{


}
int t, n;
	cin >> t;
	while (t--) {
		int n, num;
		cin >> n;
		int m = n * 2;
		vector<int>vec;
		for (int i = 0; i < m; i++) {
			cin >> num;
			vec.push_back(num);
		}
		sort(vec.begin(), vec.end());
		int ans = vec[n] - vec[n - 1];
		cout << ans << "\n";
	}
 