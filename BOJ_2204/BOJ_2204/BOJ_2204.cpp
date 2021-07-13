#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
	for (int i = 0; i < a.length(); i++) {
		if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
	}
	
	if (a < b) return true;

	return false;
}

int main(void) {
	int t;
	while (1) {
		cin >> t;
		if (t == 0) break;
		vector<string> vec;
		while (t--) {
			string s;
			cin >> s;
			vec.push_back(s);
		}
		sort(vec.begin(), vec.end(), compare);
		cout << vec[0] << '\n';
		
	}
}