#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string st;
	int cnt = 0;
	while (getline(cin, st)) {
		if (st == "고무오리 디버깅 끝") break;
		else if (st == "문제") {
			cnt++;
		}
		else if (st == "고무오리") {
			if (cnt == 0) cnt += 2;
			else cnt--;
		}
	}

	if (cnt == 0) cout << "고무오리야 사랑해" << '\n';
	else cout << "힝구" << '\n';
}