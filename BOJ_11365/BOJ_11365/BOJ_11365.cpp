#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string s;
	while (getline(cin, s)) {
		string temp1, temp2;
		if (s == "END") break;
		
		reverse(s.begin(), s.end());
		cout << s << '\n';
	}
}