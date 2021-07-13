#include <cstdio>

using namespace std;

int main(void) {
	int n,arr[8], flaga = 0, flagd = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}

	n = arr[0];
	for (int i = 1; i < 8; i++) {
		if (arr[i] > n) {
			flaga = 1;
		}
		else if (arr[i] < n) {
			flagd = 1;
		}
		n = arr[i];
	}

	if (flaga == 1 && flagd == 1) printf("mixed\n");
	else if (flaga == 1 && flagd == 0) printf("ascending\n");
	else if (flaga == 0 && flagd == 1) printf("descending\n");
}