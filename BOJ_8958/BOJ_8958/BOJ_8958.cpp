#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		string s;
		int sum = 0,a=1;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				sum += a;
			}
			else if (s[i] == 'X') {
				a = 0;
			}
			a++;
		}
		cout << sum << '\n';
	}
	

}