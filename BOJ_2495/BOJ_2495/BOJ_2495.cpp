#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	int t = 3;
	while (t--) {
		cin >> s;
		char cur;
		int cnt = 1, maxcnt=0;
		cur = s[0];
		for (int i = 1; i < s.length()+1; i++) {
			if (cur == s[i]) {
				cnt++;
			}
			else {
				if (maxcnt < cnt) maxcnt = cnt;
				cnt = 1;
				cur = s[i];
			}
		}
		cout << maxcnt << '\n'; 
	}
}