#include <cstdio>

using namespace std;

int main(void) {
	int n,day,cnt=0;
	scanf("%d", &n);
	if (n >= 1 && n <= 9) day = n;
	else day = n % 10;

	for (int i = 0; i < 5; i++) {
		int a;
		scanf("%d", &a);
		if (a == day) cnt++;
	}

	printf("%d\n", cnt);
}