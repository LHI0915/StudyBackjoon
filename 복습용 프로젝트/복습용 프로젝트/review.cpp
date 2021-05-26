#include <cstdio>
#include <vector>
#include <string.h>

using namespace std;

int v, e, num,k;
char color[2] = { 'R','B' };
char check_color[20002];
vector<int> vec[20002];

void dfs(int x) {
	if (check_color[x] == 'N')
		check_color[x] = 'R';
	for (int i = 0; i < vec[x].size(); i++) {
		int nextx = vec[x][i];

		if (check_color[nextx] == 'N') {
			if (check_color[x] == 'R') check_color[nextx]='B';
			else if (check_color[x] == 'B') check_color[nextx] = 'R';
			dfs(nextx);
		}
	}
}

bool compare_color(void) {
	for (int i = 1; i <= v; i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			int nextx = vec[i][j];

			if (check_color[nextx] == check_color[i])
				return false;
		}
	}
	return true;
}
int main(void) {
	scanf("%d", &k);
	while (k--) {
		scanf("%d%d", &v, &e);
		memset(check_color, 'N', sizeof(check_color));
		for (int i = 0; i < e; i++) {
			int a, b;
			scanf("%d%d", &a, &b);
			vec[a].push_back(b);
			vec[b].push_back(a);
		}

		for (int i = 1; i <= v; i++) {
			if (check_color[i] == 'N')
				dfs(i);
		}
		if (compare_color()) printf("YES\n");
		else printf("NO\n");

		for (int i = 1; i <= v; i++) {
			vec[i].clear();
		}
		
	}

}