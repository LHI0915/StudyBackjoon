#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

const int INF = 987654321;

int city[102][102];
int n, bus;;

void floyd() {
	// k : 거쳐가는 지점
	for (int k = 1; k <= n; k++) {
		// i : 처음 시작점 
		for (int i = 1; i <= n; i++) {
			// j : 도착지점
			for (int j = 1; j <= n; j++) {
				if (i == j || j == k || k == i) continue;
				if (city[i][j] > city[i][k] + city[k][j]) {
					city[i][j] = city[i][k] + city[k][j];
				}
			}
		}
	}
}
int main(void) {
	//memset(city, 1, sizeof(city));
	scanf("%d%d", &n, &bus);

	for (int i = 0; i < bus; i++) {
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if (city[a][b] != 0)
			city[a][b] = min(city[a][b], c);
		else
			city[a][b] = c;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i != j && city[i][j] == 0) {
				city[i][j] = INF;
			}
		}
	}

	floyd();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (city[i][j] == INF) printf("%d ", 0);
			else  printf("%d ", city[i][j]);
		}
		printf("\n");
	}

}