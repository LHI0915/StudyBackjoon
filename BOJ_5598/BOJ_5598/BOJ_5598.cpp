#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') s[i] = 'X';
		else if (s[i] == 'B') s[i] = 'Y';
		else if (s[i] == 'C') s[i] = 'Z';
		else s[i] = s[i] - 3;
	}

	for (int i = 0; i < s.length(); i++) {
		cout << s[i];
	}
}