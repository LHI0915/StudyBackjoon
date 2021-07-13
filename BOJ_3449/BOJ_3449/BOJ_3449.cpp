#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		int cnt = 0;
		cin >> s1 >> s2;
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i]) cnt++;
		}

		cout << "Hamming distance is " << cnt << ".\n";
	}
}