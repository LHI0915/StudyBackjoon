#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string s;
	int t;
	cin >> t;
	getchar();
	while (t--) {
		string result, temp;
		getline(cin, s);
		for (int i = 0; i < s.length()+1; i++) {
			if (s[i] == ' ' || s[i] == '\0') {
				reverse(temp.begin(),temp.end());
				result += (temp + ' ');
				temp.clear();
			}
			else {
				temp += s[i];
			}
		}
		cout << result << '\n';
	}
	

}