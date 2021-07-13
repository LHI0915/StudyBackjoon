#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	int jcnt = 0, icnt = 0;
	cin >> s;
	for (int i = 0; i < s.length()-2; i++) {
		if (s[i] == 'J') {
			if (s[i + 1] == 'O' && s[i + 2] == 'I') jcnt++;
		}
		else if (s[i] == 'I') {
			if (s[i + 1] == 'O' && s[i + 2] == 'I') icnt++;
		}
	}

	cout << jcnt << '\n' << icnt;
}