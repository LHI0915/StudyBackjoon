#include <cstdio>

using namespace std;

int main(void) {
	int a, b,sum=0,mul=1;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		for (int j = 0; j <= i; j++) {
			sum += j;
		}
		mul = (mul * sum)%14579;
		sum = 0;
	}
	printf("%d\n",mul);
}