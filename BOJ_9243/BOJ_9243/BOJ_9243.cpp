#include <iostream>
#include <string>

using namespace std;
int main(void) {
	int n,flag=1;
	string s1, s2;
	cin >> n;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.length(); i++) {
		if (n % 2 == 1) {
			if (!(s1[i] - '0') != (s2[i] - '0')) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
			}
		}
		else if (n % 2 == 0) {
			if ((s1[i] - '0') != (s2[i] - '0')) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
			}
		}
	}
	
	if (flag) cout << "Deletion succeeded" << '\n';
	else cout << "Deletion failed" << '\n';
}