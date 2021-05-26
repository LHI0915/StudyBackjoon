#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> vec[100001];
queue<int> q;
int parent[100001];
bool visited[100001];



void bfs(int x) {
	visited[x] = true;
	q.push(x);
	while (!q.empty()) {
		int curx = q.front();
		q.pop();

		for (int i = 0; i < vec[curx].size(); i++) {
			int nextx = vec[curx][i];

			if (visited[nextx] == false) {
				visited[nextx] = true;
				q.push(nextx);
				parent[nextx] = curx;
			}
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		int u, v;
		scanf("%d%d", &u, &v);
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	bfs(1);
	for (int i = 2; i <= n; i++) {
		printf("%d\n", parent[i]);
	}
}