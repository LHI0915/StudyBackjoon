#include <cstdio>

using namespace std;

int main(void) {
	int n,cnt=0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			cnt += i;
			cnt += j;
		}
	}

	printf("%d", cnt);
}