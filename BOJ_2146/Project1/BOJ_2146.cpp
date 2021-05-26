#include <cstdio>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
bool check[101][101];
int sea[101][101];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y, int cnt) {
	check[x][y] = true;
	sea[x][y] = cnt;

	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= n) continue;

		if (check[nextx][nexty] == false && sea[nextx][nexty] == 1) {
			dfs(nextx, nexty, cnt);
		}
	}
}
int bfs(int num) {
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (sea[i][j] == num) {
				check[i][j] = true;
				q.push(make_pair(i, j));
			}
		}
	}
	int result = 0;
	while (!q.empty()) {
		int curSize = q.size();
		
		for (int i = 0; i < curSize; i++) {
			int curx = q.front().first;
			int cury = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++) {
				int nextx = curx + dx[i];
				int nexty = cury + dy[i];

				if (nextx < 0 || nextx >= n || nexty < 0 || nexty >= n) continue;

				if (sea[nextx][nexty] && sea[nextx][nexty]!=num) 
					return result;

				else if (check[nextx][nexty] == false && sea[nextx][nexty] == 0) {
					check[nextx][nexty] = true;
					q.push(make_pair(nextx, nexty));
				}
			}

		}
		result++;

	}
}
int main(void) {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &sea[i][j]);
		}
	}

	// dfs를 이용해서 섬에 번호 붙이기
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j] == false && sea[i][j]) {
				dfs(i, j, cnt++);
			}
		}
	}

	int result = 987654321;
	for (int i = 1; i < cnt; i++) {
		memset(check, false, sizeof(check));
		result = min(result, bfs(i));
	}

	printf("%d\n", &result);
}