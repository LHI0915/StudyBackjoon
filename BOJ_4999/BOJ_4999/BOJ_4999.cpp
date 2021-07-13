#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s1, s2;
	cin >> s1 >> s2;
	int s1len = s1.length();
	int s2len = s2.length();
	if (s1len >= s2len) cout << "go" << '\n';
	else cout << "no" << '\n';
}