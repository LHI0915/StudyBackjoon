#include <cstdio>

using namespace std;

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n,sum_n=0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			int num;
			scanf("%d", &num);
			sum_n += num;
		}
		printf("%d\n", sum_n);
	}
}