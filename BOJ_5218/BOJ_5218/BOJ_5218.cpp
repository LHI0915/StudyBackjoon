#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		int result;
		cin >> s1 >> s2;
		cout << "Distances: ";
		for (int i = 0; i < s1.length(); i++) {
			if (s2[i] >= s1[i]) result = (s2[i] - 'A') - (s1[i] - 'A');
			else result = (s2[i] - 'A' + 26) - (s1[i] - 'A');
			cout << result << ' ';
		}
		cout << '\n';
		
	}
}