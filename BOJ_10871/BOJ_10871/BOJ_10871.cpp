#include <cstdio>

using namespace std;

int main(void) {
	int n, x;
	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++) {
		int n;
		scanf("%d", &n);
		if (x > n) printf("%d ", n);
	}
}