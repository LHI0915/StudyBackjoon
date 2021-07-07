#include <cstdio>

using namespace std;

int main(void) {
	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		int n;
		scanf("%d", &n);
		if ((n & (-n)) == n) printf("%d\n", 1);
		else printf("%d\n", 0);
	}
}