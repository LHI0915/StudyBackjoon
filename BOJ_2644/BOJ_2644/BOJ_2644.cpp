#include <cstdio>
#include <vector>

using namespace std;

vector<pair<int, int>> vec[101];
int first_p, second_p, m,save_rel;
bool visited[101];

void dfs(int x, int w) {
	visited[x] = true;
	if (x == second_p) {
		save_rel = w;
		return;
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
	scanf("%d%d", &first_p, &second_p);
	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d",&x,&y);
		vec[x].push_back(make_pair(y, 1));
		vec[y].push_back(make_pair(x, 1));
	}

	dfs(first_p,0);

	if (save_rel) {
		printf("%d\n", save_rel);
	}
	else {
		printf("%d\n", -1);
	}

}