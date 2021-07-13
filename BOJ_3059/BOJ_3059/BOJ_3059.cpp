#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	int alphasum=0;
	for (int i = 0; i < 26; i++) {
		alphasum += 'A' + i;
	}
	cin >> t;
	while (t--) {
		int arr[26] = { 0, }, ssum = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (arr[s[i] - 'A'] == 0) {
				ssum += s[i];
				arr[s[i] - 'A'] = 1;
			}
		}
		cout << alphasum - ssum << '\n';
	}


}