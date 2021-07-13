#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(),s2.end());

	stoi(s1);
	stoi(s2);
	if (s1 > s2) cout << s1;
	else cout << s2;
}