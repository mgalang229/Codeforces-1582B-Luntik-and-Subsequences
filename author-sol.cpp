#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// for every 1 (to be removed), count the subsequences 
		// that can be formed by keeping or deleting 0s
		int cnt0 = 0;
		int cnt1 = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			cnt0 += (x == 0);
			cnt1 += (x == 1);
		}
		cout << (1LL << cnt0) * cnt1 << '\n';
	}
	return 0;
}
