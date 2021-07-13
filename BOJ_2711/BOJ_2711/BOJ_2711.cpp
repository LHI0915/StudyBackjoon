#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		string s;
		int index;
		cin >> index >> s;
		string first = s.substr(0, index-1);
		string second = s.substr(index, s.length() - index);
		cout << first << second << '\n';
	}
}