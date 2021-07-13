#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int a;
		string s,temp;
		cin >> a >> s;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < a; j++) {
				temp += s[i];
			}
		}
		cout << temp << '\n';
	}
}