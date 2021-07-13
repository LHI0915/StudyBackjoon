#include <cstdio>

using namespace std;

int main(void) {
	int n, maxnum=0;
	double arr[1001], sum=0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%lf", &arr[i]);
		if (maxnum < int(arr[i])) maxnum = arr[i];
	}

	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / maxnum * 100;
		sum += arr[i];
	}

	printf("%f\n", sum / n);

}