#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string st;
	int cnt = 0;
	while (getline(cin, st)) {
		if (st == "������ ����� ��") break;
		else if (st == "����") {
			cnt++;
		}
		else if (st == "������") {
			if (cnt == 0) cnt += 2;
			else cnt--;
		}
	}

	if (cnt == 0) cout << "�������� �����" << '\n';
	else cout << "����" << '\n';
}