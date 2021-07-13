#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s,temp;
	int cnt = 0;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || s[i]== '\0') {
			if ((s[0] == ' ' && i==0) || ( s[s.length()-1]==' ' && i==s.length()-1)) continue;
			temp.clear();
			cnt++;
		}
		else {
			temp += s[i];
		}
	}

	if (!temp.empty()) cnt++;

	cout << cnt;


}