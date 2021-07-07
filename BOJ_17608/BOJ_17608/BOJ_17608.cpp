#include <cstdio>

using namespace std;

int arr[100001];
int main(void) {
	int n,cnt=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int look = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] <= look) continue;
		else {
			look = arr[i];
			cnt++;
		}
	}

	printf("%d\n", cnt);
}