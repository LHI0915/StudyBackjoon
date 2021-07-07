#include <cstdio>

using namespace std;

int main(void) {
	int n, m,t;
	scanf("%d", &t);
	while (t--) {
		int cnt = 0;
		scanf("%d%d", &n, &m);

		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				int result = (i * i + j * j + m) % (i * j);
				if (result == 0) cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	
}