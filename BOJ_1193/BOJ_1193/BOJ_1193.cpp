#include <cstdio>

using namespace std;

int main(void) {
	int n,i=0;
	scanf("%d", &n);
	while (true) {
		i += 1;
		n -= i;
		if (n <= 0){
			n += i;
			i += 1;
			break;
		}
	}

	if (i % 2 == 1)
		printf("%d/%d\n", n , i - n);
	else
		printf("%d/%d\n", i - n, n);
}