#include <cstdio>
using namespace std;

const int INF = 987654321;
int n, m;
int friends[102][102];
int countfriends[102][102];
void floyd() {
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j || j == k || i == k) continue;

				if (friends[i][j] > friends[i][k] + friends[k][j]) {
					friends[i][j] = friends[i][k] + friends[k][j];
				}
			}
		}
	}
}
int main(void) {
	int mincnt = 987654321, number, cnt = 0;;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		friends[a][b] = 1;
		friends[b][a] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j && friends[i][j] == 0) {
				friends[i][j] = INF;
			}
		}
	}

	floyd();

	
	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= n; j++) {
			cnt += friends[i][j];
		}
		if (mincnt > cnt) {
			number = i;
			mincnt = cnt;
		}
	}

	printf("%d\n", number);
}