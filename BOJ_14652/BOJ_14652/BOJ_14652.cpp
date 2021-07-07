#include <cstdio>

using namespace std;

int main(void) {
	int n, m, k,cnt=-1,flag=0;
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cnt++;
			if (cnt == k) {
				printf("%d %d\n", i, j);
				flag = 1;
				break;
			}
		}

		if (flag == 1) break;
	}
}