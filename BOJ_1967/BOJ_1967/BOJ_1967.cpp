#include <cstdio>
#include <string.h>
#include <vector>

using namespace std;
vector<pair<int, int>> vec[10001];
bool visited[10001];
int maxNum = 0;
int far_node;

void dfs(int x, int w) {
	visited[x] = true;
	if (maxNum < w) {
		maxNum = w;
		far_node = x;
	}

	for (int i = 0; i < vec[x].size(); i++) {
		int nextx = vec[x][i].first;
		int nextw = vec[x][i].second;

		if (visited[nextx] == false) {
			dfs(nextx, nextw + w);
		}
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		vec[u].push_back(make_pair(v, w));
		vec[v].push_back(make_pair(u, w));
	}

	dfs(1, 0);
	memset(visited, false, sizeof(visited));
	maxNum = 0;

	dfs(far_node, 0);
	printf("%d\n", maxNum);
}