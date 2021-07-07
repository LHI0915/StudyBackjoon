#include <cstdio>

using namespace std;

int arr[500001];
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int result = arr[0];
	for (int i = 1; i < n; i++) {
		result -= 1;
		result += arr[i];
	}

	printf("%d\n", result);
}