#include <cstdio>
#include <set>

using namespace std;

set<int> s;
int arr[5][5];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y, int cnt, int sum) {
	if (cnt == 6) {
		s.insert(sum);
		return;
	}

	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nextx < 0 || nextx >= 5 || nexty < 0 || nexty >= 5) continue;
		dfs(nextx, nexty, cnt + 1, sum * 10 + arr[nextx][nexty]);
		
	}
}
int main(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			dfs(i, j, 0, 0);
		}
	}
	
	printf("%d\n", s.size());

}