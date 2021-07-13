#include <iostream>
#include <string>

using namespace std;

int main(void) {
	while (1) {
		string s;
		char alpha;
		int cnt=0;
		cin >> alpha;
		getchar();
		if (alpha == '#') break;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == alpha || char(s[i]+32) == alpha) cnt++;
		}

		cout << alpha << ' ' << cnt << '\n';
	}
}