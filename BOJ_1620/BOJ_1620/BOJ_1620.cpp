#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	ios::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	map<string, int> mp;
	map<int, string> mp2;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		mp.insert(pair<string, int>(s,i));
		mp2.insert(pair<int, string>(i, s));
	}

	for (int i = 1; i <= m; i++) {
		string s;
		cin >> s;
		if (s[0] >= 'A' && s[0] <= 'Z') cout << mp.at(s) << '\n';
		else cout << mp2.at(stoi(s)) << '\n';
	}
}