#include <vector>
#include <queue>
#include <cstdio>

using namespace std;
#define MAXNUM 100000

int n, k,mincnt=987654321;
bool check[100001];
queue<pair<int, int>> q;
vector<int> vec;

void bfs(int x) {
	check[x] = true;
	q.push(make_pair(x, 0));
	while (!q.empty()) {
		int curx = q.front().first;
		int curcnt = q.front().second;
		q.pop();

		check[curx] = true;
		if (curcnt > mincnt) continue;
		
		if (curx == k && mincnt >= curcnt) {
			mincnt = curcnt;
			vec.push_back(curcnt);
		}
		

		if (curx + 1 <= MAXNUM && check[curx + 1] == false) {
			q.push(make_pair(curx + 1, curcnt + 1));
		}

		if (curx - 1 >= 0 && check[curx - 1] == false) {
			q.push(make_pair(curx - 1, curcnt + 1));
		}

		if (curx * 2 <= MAXNUM && check[curx * 2] == false) {
			q.push(make_pair(curx * 2, curcnt + 1));

		}
	}
}
int main(void) {
	scanf("%d%d", &n, &k);
	bfs(n);
	printf("%d\n%d", mincnt, vec.size());

}