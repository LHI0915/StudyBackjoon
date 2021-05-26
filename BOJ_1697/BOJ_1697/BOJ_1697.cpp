#include <cstdio>
#include <queue>

#define MAXNUM 100000

using namespace std;

int n, k,result;
bool check[100001];
queue<pair<int,int>> q;

void bfs(int x) {
	check[x] = true;
	q.push(make_pair(x,0));
	while (!q.empty()) {
		int curx = q.front().first;
		int curcnt = q.front().second;
		q.pop();

	
		if (curx == k) {
			result = curcnt;
			break;
		}


		if (curx + 1>=0 && curx + 1 <= MAXNUM && check[curx + 1] == false) {
			q.push(make_pair(curx + 1, curcnt + 1));
			check[curx + 1] = true;
		}

		if (curx - 1 >=0 && curx-1 <= MAXNUM && check[curx-1] == false) {
			q.push(make_pair(curx-1, curcnt + 1));
			check[curx-1] = true;
		}

		if (curx *2 >=0 && curx*2 <= MAXNUM && check[curx *2] == false) {
			q.push(make_pair(curx * 2, curcnt + 1));
			check[curx * 2] = true;
		}
	}
}
int main(void) {
	scanf("%d%d", &n, &k);
	bfs(n);
	printf("%d\n", result);

}