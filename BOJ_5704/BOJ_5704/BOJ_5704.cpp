#include <iostream>
#include <string>

using namespace std;

int main(void) {
	
	string s;
	while (getline(cin, s)) {
		int arr[26] = { 0, }, flag = 1;
		if (s == "*") break;
		for (int i = 0; i < s.length(); i++) {
			if(s[i]>='a' && s[i]<='z')
				arr[s[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (arr[i] == 0) {
				flag = 0;
				break;
			}
		}

		if (flag) cout << 'Y' << '\n';
		else cout << 'N' << '\n';
	}

	

}