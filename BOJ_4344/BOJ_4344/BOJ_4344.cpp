#include <cstdio>

using namespace std;

int main(void) {
	int c;
	scanf("%d", &c);
	while (c--) {
		int n,avg=0,cnt=0, arr[1001];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			avg += arr[i];
		}
		avg = avg / n;

		for (int i = 0; i < n; i++) {
			if (arr[i] > avg) cnt++;
		}

		double result = (double(cnt) / n)*100;
		printf("%.3f%%\n",result);
		
	}
}