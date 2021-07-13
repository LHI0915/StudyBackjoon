#include <cstdio>

using namespace std;

int main(void) {
	int t,n,m;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d %d\n", m * 2 - n, m - (m * 2 - n));
	}
}