#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s[16];
	int maxlength = 0;
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		if (maxlength < s[i].length()) maxlength = s[i].length();
	}

	for (int i = 0; i < maxlength; i++) {
		for (int j = 0; j < 5; j++) {
			if(i >= s[j].length()) continue;
			cout << s[j][i];
		}
	}
}