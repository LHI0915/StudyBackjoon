#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	
	string s;
	cin >> s;

	string result = s;

	for (int i = 1; i < t; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != temp[j])
				result[j] = '?';
		}
	}

	cout << result;
	
}