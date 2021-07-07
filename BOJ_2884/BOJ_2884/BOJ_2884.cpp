#include <cstdio>

using namespace std;

int main(void) {
	int a, b;
	scanf("%d%d", &a, &b);
	if (b - 45 < 0) {
		if (a == 0) a = 23;
		else a = a - 1;
		b = b + 60 - 45;
	}
	else if (b - 45 > 0)
		b = b - 45;
	else b = 0;
	printf("%d %d", a, b);
	
}