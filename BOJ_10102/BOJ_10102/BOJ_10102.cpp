#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n,cnt=0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'A') cnt++;
		else if (s[i] == 'B') cnt--;
	}

	if (cnt == 0) cout << "Tie" << '\n';
	else if (cnt > 0) cout << 'A' << '\n';
	else cout << 'B' << '\n';
}