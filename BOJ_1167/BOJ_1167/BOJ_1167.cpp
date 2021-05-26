#include <cstdio>
#include <vector>
#include <string.h>

using namespace std;


int maxNum = 0;
int far_node;
bool visited[100001];
vector<pair<int,int>> vec[100001];

void dfs(int x, int w) {
	visited[x] = true;
	if (maxNum < w) {
		far_node = x;
		maxNum = w;
	}

	for (int i = 0; i < vec[x].size(); i++) {
		int nextx = vec[x][i].first;
		int nextw = vec[x][i].second;

		if (visited[nextx] == false) {
			dfs(nextx, w + nextw);
		}
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	while (n--) {
		int v,u,w;
		scanf("%d", &v);
		while (1) {
			scanf("%d", &u);
			if (u == -1) break;
			scanf("%d", &w);
			vec[v].push_back(make_pair(u, w));
		}
	}

	dfs(1, 0);
	memset(visited, false, sizeof(visited));
	maxNum = 0;
	
	dfs(far_node, 0);
	printf("%d\n", maxNum);
	
}