#include <string>
#include <iostream>
#include <queue>

using namespace std;


int r, c,sheep,wolf;
int alive_cnt[2];
bool visited[251][251];
queue<pair<int, int>> q;
string s[251];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int x, int y) {
	visited[x][y] = true;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		int curx = q.front().first;
		int cury = q.front().second;
		q.pop();

		if (s[curx][cury] == 'v') wolf++;
		else if (s[curx][cury] == 'o') sheep++;

		for (int i = 0; i < 4; i++) {
			int nextx = curx + dx[i];
			int nexty = cury + dy[i];

			if (nextx < 0 || nextx >= r || nexty < 0 || nexty >= c) continue;

			if (visited[nextx][nexty] == false && s[nextx][nexty]!='#') {
				q.push(make_pair(nextx, nexty));
				visited[nextx][nexty] = true;
			}

			
		}
	}
}
int main(void) {
	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (visited[i][j] == false && s[i][j]!='#') {
				bfs(i, j);
			}

			if (wolf >= sheep) alive_cnt[1] += wolf;
			else if (sheep > wolf) alive_cnt[0] += sheep;
			wolf = 0;
			sheep = 0;
			
		}
	}

	printf("%d %d", alive_cnt[0], alive_cnt[1]);



}