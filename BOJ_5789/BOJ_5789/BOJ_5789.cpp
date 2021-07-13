#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int first = s.length() / 2;
		int second = first - 1;

		if (s[first] == s[second]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
}