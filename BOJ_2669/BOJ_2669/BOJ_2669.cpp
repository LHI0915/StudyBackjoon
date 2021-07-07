#include <cstdio>

using namespace std;
int graph[101][101];
int x1, y1, x2, y2;

void solve() {
	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			graph[i][j]++;
		}
	}
}
int main(void) {

	for (int i = 0; i < 4; i++) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		solve();
	}

	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		for (int j = 0; j <= 100; j++) {
			if (graph[i][j] > 0)
				sum++;
		}
		
	}

	printf("%d\n", sum);
	
}