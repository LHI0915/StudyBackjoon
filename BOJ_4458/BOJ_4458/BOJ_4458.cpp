#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string s;
		getline(cin, s);
		if(s[0]>='a' && s[0] <='z')
			s[0] = s[0] - 32;
		cout << s << '\n';
	}
}