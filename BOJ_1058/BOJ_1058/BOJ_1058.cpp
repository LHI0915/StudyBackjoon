#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int INF= 987654321;
int n;
int friends[51][51];

void floyd(void) {
	//���İ��� ���
	for (int k = 0; k < n; k++) {
		// ��߳��
		for (int i = 0; i < n; i++) {
			// �������
			for (int j = 0; j < n; j++) {
				if (i == j || j == k || i == k) continue;

				else if (friends[i][j] > friends[i][k] + friends[k][j]) {
					// i���� �����ؼ� j�� ���µ� i -> k -> j ���� i -> j�� �� ũ��
					friends[i][j] = friends[i][k] + friends[k][j];
				}
			}
		}
	}
}
int main(void) {
	string s[51];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];

		for (int j = 0; j < n; j++) {
			if (i == j)
				friends[i][j] = 0;
			else {
				if (s[i][j] == 'Y') {
					friends[i][j] = 1;
				}
				else if (s[i][j] == 'N')
					friends[i][j] = INF;
			}
		}
	}

	floyd();

	int result = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			else if (friends[i][j] <= 2) // INF�� �Ŀ� ���鼭 2�̻� ���� �� ����
				cnt++;
		}
		result = max(result, cnt); // �� ���� ���Ǹ鼭 2�̻��� ���� ���� ������ ����

	}

	cout << result << '\n';

	
}