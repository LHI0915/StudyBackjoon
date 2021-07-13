#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	while (getline(cin, s)) {
		bool flag = false;
		int cnt = 0;
		if (s == "EOI") break;
		
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'n' || s[i] == 'N') cnt++;
			else if ((s[i] == 'e' || s[i] == 'E') && cnt == 1) cnt++;
			else if ((s[i] == 'm' || s[i] == 'M') && cnt == 2) cnt++;
			else if ((s[i] == 'o' || s[i] == 'O') && cnt == 3) {
				flag = true;
				break;
			}
			else cnt = 0;
		}
		if (flag) cout << "Found" << '\n';
		else cout << "Missing" << '\n';
	}
}