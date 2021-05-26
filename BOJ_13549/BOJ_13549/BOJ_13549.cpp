#include <cstdio>
#include <queue>

using namespace std;
#define MAXNUM 100000

queue<pair<int, int>> q;
int n, k,mintime = 987654321, result;
bool check[100001];

void bfs(int x) {
	check[x] = true;
	q.push(make_pair(x, 0));
	while (!q.empty()) {
		int curx = q.front().first;
		int curtime = q.front().second;
		q.pop();

		check[curx] = true;

		if (mintime <= curtime) continue;

		if (curx == k && mintime > curtime) {
			mintime = curtime;
		}

		if (curx + 1 <= MAXNUM && check[curx + 1] == false) {
			q.push(make_pair(curx+1, curtime + 1));
		}

		if (curx - 1 >= 0 && check[curx - 1] == false) {
			q.push(make_pair(curx - 1, curtime + 1));
		}

		if (curx * 2 <= MAXNUM && check[curx * 2] == false) {
			q.push(make_pair(curx * 2, curtime));
		}

	}

}
int main(void) {
	scanf("%d%d", &n, &k);
	bfs(n);
	printf("%d\n", mintime);

}