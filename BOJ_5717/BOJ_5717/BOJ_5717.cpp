#include <cstdio>

using namespace std;

int main(void) {
	int m, f;
	while (scanf("%d%d", &m, &f)) {
		if (m == 0 && f == 0) break;
		printf("%d\n", m + f);
	}
}