#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

int n,maxHeight,maxnum;
bool check[101][101];
int saferand[101][101];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y, int height) {
	check[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= n) continue;
		if (check[nextx][nexty] == false && saferand[nextx][nexty] > height) {
			dfs(nextx, nexty, height);
		}
	}
}
int main(void) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &saferand[i][j]);
			maxHeight = max(maxHeight, saferand[i][j]);
		}
	}

	for (int k = 0; k <= maxHeight; k++) {
		int cnt = 0;
		memset(check, false, sizeof(check));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (check[i][j] == false && saferand[i][j] > k) {
					dfs(i, j, k);
					cnt++;
				}
				
			}
		}
		maxnum = max(maxnum, cnt);
	}
	printf("%d\n",maxnum);
}