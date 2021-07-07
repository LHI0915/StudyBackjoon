#include <cstdio>
#include <cmath>

using namespace std;

int main(void) {
	int t;
	int a, b;

	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		int result = 1;
		for (int i = 0; i < b; i++) {
			result = (result * a) % 10;
		}
		if (result == 0) printf("%d\n", result + 10);
		else printf("%d\n", result);
		

		
	}
}