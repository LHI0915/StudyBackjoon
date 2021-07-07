#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	string s1, s2;
	
	cin >> t;
	while (t--) {
		bool flag = true;
		char arr1[101], arr2[101];
		cin >> s1 >> s2;
		
		int s1size = s1.length();
		int s2size = s2.length();

		if (s1size != s2size) {
			cout << s1 << " & " << s2 << " are NOT anagrams." << '\n';
			continue;
		}

		for (int i = 0; i < s1size; i++) arr1[i] = s1[i];
		for (int j = 0; j < s2size; j++) arr2[j] = s2[j];

		sort(arr1, arr1 + s1size);
		sort(arr2, arr2 + s2size);

		for (int i = 0; i < s1size; i++) {
			if (arr1[i] != arr2[i]) {
				flag = false;
				break;
			}
		}

		if (flag) cout << s1 << " & " << s2 << " are anagrams." << '\n';
		else cout << s1 << " & " << s2 << " are NOT anagrams." << '\n';
	}
}