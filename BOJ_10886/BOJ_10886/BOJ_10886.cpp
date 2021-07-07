#include <cstdio>

using namespace std;

int main(void) {
	int n,cnt=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		a == 1 ? cnt++ : cnt--;
	}

	if (cnt > 0) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}