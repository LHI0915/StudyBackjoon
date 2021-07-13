#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s = "CAMBRIDGE";
	string s1;
	cin >> s1;
	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s1[i] == s[j]) s1[i] = ' ';
		}
	}

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != ' ')
			cout << s1[i];
	}
}