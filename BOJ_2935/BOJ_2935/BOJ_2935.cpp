#include <iostream>
#include <string>


using namespace std;

int main(void) {
	string a, b;
	char op;
	cin >> a >> op >> b;
	if (op == '+') {
		if (a.length() > b.length()) {
			string result = a;
			int size = a.length() - b.length();
			result[size] = '1';
			cout << result << '\n';
		}
		else if (a.length() == b.length()) {
			string result = a;
			result[0] = '2';
			cout << result << '\n';
		}
		else if (a.length() < b.length()) {
			string result = b;
			int size = b.length() - a.length();
			result[size] = '1';
			cout << result << '\n';
		}
	}
	else {
		string result = a;
		int size = b.length() - 1;
		for (int i = 0; i < size; i++) {
			result += '0';
		}

		cout << result << '\n';
	}
}