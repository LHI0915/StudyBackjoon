#include <iostream>
#include <string>

using namespace std;


int main(void) {
	string s;
	cin >> s;
	int result = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') result += (s[i] - 'a' + 1);
		else if (s[i] >= 'A' && s[i] <= 'Z') result +=( s[i] - 'A' + 27);
	}
	int cnt = 0;
	for (int i = 2; i < result; i++) {
		if (result % i==0) {
			cnt++;
			break;
		}
	}
	if (cnt) cout << "It is not a prime word." << '\n';
	else cout << "It is a prime word." << '\n';
}