#include <cstdio>

using namespace std;

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > 2) {
		printf("After\n");
	}
	else if (a == 2) {
		if (b > 18) printf("After\n");
		else if (b < 18) printf("Before\n");
		else printf("Special\n");
	}
	else {
		printf("Before\n");
	}
}