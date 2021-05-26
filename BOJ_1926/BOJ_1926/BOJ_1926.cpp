#include <cstdio>

using namespace std;

int draw[501][501];
bool visited[501][501];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int n, m, draw_cnt = 0,draw_size=1;

void dfs(int x, int y) {
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= m) continue;

		if (visited[nextx][nexty] == false && draw[nextx][nexty] == 1) {
			draw_size++;
			draw[nextx][nexty] = draw_size;
			dfs(nextx, nexty);
		}
	}
}
int main(void) {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &draw[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false && draw[i][j] == 1) {
				dfs(i, j);
				draw_cnt++;
				draw_size = 1;
			}
		}
	}

	int maxnum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (maxnum < draw[i][j]) {
				maxnum = draw[i][j];
			}
		}
	}

	printf("%d\n%d", draw_cnt, maxnum);
}