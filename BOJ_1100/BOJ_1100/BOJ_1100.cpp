#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string s[8];
	int cnt = 0;
	for (int i = 0; i < 8; i++) cin >> s[i];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + 1) % 2 == 0) {
				if (s[i][j] == 'F' && (j + 1) % 2 == 0)
					cnt++;

			}
			else if ((i + 1) % 2 == 1) {
				if (s[i][j] == 'F' && (j + 1) % 2 == 1)
					cnt++;
			}
		}
	}
	cout << cnt;
}