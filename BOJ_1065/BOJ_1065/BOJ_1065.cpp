#include <cstdio>

using namespace std;

int main(void) {
	int n,cnt=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int temp = i;
		if (temp < 100) {
			cnt++;
			continue;
		}
		else if (temp >= 100 && temp <= 999) {
			int a = temp / 100;
			int b = (temp / 10) % 10;
			int c = temp % 10;
			if (a - b == b - c) cnt++;
		}
	}
	printf("%d\n", cnt);
}