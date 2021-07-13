#include <cstdio>

using namespace std;

int main(void) {
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c)) {
		int flag = 0;
		if (a == 0 || b == 0 || c == 0) break;
		
		if (a >= b && a >= c) {
			if (a * a == b * b + c * c) flag = 1;
		}
		else if (b >= a && b >= c) {
			if (b * b == a * a + c * c) flag = 1;
		}
		else if (c >= a && c >= b) {
			if (c * c == a * a + b * b) flag = 1;
		}

		if (flag == 1) printf("right\n");
		else printf("wrong\n");

	}
	

}