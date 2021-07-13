#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string s,temp;
		int cnt = 0, index=0; 
		getline(cin,s);
		for (int i = 0; i < s.length(); i++) {
			index++;
			if (s[i] == ' ') cnt++;
			if (cnt == 2) break;
			temp += s[i];
		}

		cout << s.substr(index, s.length() - index) <<' '<< temp << '\n';
	}
}