#include <cstdio>
#include <algorithm>

using namespace std;

int arr[9], sum_height = 0;

void solve() {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if ((sum_height - (arr[i] + arr[j])) == 100) {
				arr[i] = 0;
				arr[j] = 0;
				return;
			}
		}
	}
}
int main(void) {
	
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum_height += arr[i];
	}
	sort(arr, arr + 9);

	solve();

	for (int i = 0; i < 9; i++) {
		if (arr[i] != 0)
			printf("%d\n", arr[i]);
	}
	
	
}