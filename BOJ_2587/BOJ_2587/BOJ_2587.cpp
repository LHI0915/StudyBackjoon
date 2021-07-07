#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	int arr[5],avg=0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		avg += arr[i];
	}

	sort(arr, arr + 5);
	printf("%d\n%d\n", avg / 5, arr[2]);
}