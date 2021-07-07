#include <cstdio>

using namespace std;

int graph[102][102];
int n;
void floyd() {
	for (int k = 1; k <= n; k++) {
		//k : 거쳐가는 지점
		for (int i = 1; i <= n; i++) {
			// i : 출발지점
			for (int j = 1; j <= n; j++) {
				// j : 도착지점 
				if (graph[i][k] && graph[k][j]) {
					graph[i][j] = 1;
				}
			}
		}
	}
}


int main(void) {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &graph[i][j]);
		}
	}

	floyd();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}

}