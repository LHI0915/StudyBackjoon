#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n,cnt=1;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') cnt++;
	}

	cout << cnt;

}