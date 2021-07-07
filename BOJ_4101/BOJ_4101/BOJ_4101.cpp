#include <cstdio>

using namespace std;

int main(void) {
	int n, m;
	while (scanf("%d%d", &n, &m)) {
		if (n == 0 && m == 0) break;
		if (n > m) printf("Yes\n");
		else printf("No\n");
	}
}