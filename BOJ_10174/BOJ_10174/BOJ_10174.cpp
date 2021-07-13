#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string s,temp;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
			temp += s[i];
		}

		reverse(temp.begin(), temp.end());

		if (s == temp) cout << "Yes" << '\n';
		else cout << "No" << '\n';


	}
}