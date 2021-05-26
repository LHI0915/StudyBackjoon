#include <cstdio>

using namespace std;
int n, m, k,maxcnt,cnt=1;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int trash[101][101];
bool visited[101][101];

void dfs(int x, int y) {
	visited[x][y] = true;
	if (cnt > maxcnt) {
		maxcnt = cnt;
	}
	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= m) continue;

		if (visited[nextx][nexty] == false && trash[nextx][nexty] == 1) {
			cnt++;
			dfs(nextx, nexty);
		}
	}

}
int main(void) {
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < k; i++) {
		int a, b;
		scanf("%d%d", &a, &b);
		trash[a-1][b-1] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] == false && trash[i][j]==1) {
				dfs(i,j);
				cnt = 1;
			}
		}
	}

	printf("%d\n", maxcnt);
}