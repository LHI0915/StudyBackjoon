#include <cstdio>

using namespace std;

int main(void){
	int n,result,count=0;
	scanf("%d", &n);
	result = n;
	while (1) {
		int a = result / 10;
		int b = result % 10;
		int c = (a + b) % 10;
		int d = b * 10 + c;
		count++;
		result = d;
		if (result == n) break;
	}

	printf("%d\n", count);

}