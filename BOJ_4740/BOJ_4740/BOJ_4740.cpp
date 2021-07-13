#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string s;
	while (getline(cin, s)) {
		if (s == "***") break;
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
}