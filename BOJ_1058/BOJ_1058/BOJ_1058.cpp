#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int INF= 987654321;
int n;
int friends[51][51];

void floyd(void) {
	//거쳐가는 노드
	for (int k = 0; k < n; k++) {
		// 출발노드
		for (int i = 0; i < n; i++) {
			// 도착노드
			for (int j = 0; j < n; j++) {
				if (i == j || j == k || i == k) continue;

				else if (friends[i][j] > friends[i][k] + friends[k][j]) {
					// i에서 시작해서 j로 가는데 i -> k -> j 보다 i -> j가 더 크면
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
			else if (friends[i][j] <= 2) // INF가 식에 들어가면서 2이상 나올 수 있음
				cnt++;
		}
		result = max(result, cnt); // 각 줄을 살피면서 2이상인 수가 많은 라인이 정답

	}

	cout << result << '\n';

	
}