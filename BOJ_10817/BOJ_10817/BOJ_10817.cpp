#include <cstdio>

using namespace std;

int main(void) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ((b<=a && a <= c) || (c<=a && a<=b)) printf("%d\n", a);
	else if ((a <= b && b <= c) || (c <= b && b <= a)) printf("%d\n", b);
	else  printf("%d\n", c);
}
