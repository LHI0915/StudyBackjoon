#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	ios::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<string,int> mp;
		while (n--) {
			string cloth, type;
			cin >> cloth >> type;
			if (mp.count(type) == 0) mp[type] = 1;
			else mp[type]++;
		}
		int result = 1;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			result *= it->second + 1;
		}

		cout << result - 1 << '\n';
	}
}