#include <cstdio>

using namespace std;

int main(void) {
	int a, b, v;
	scanf("%d%d%d", &a, &b, &v);
	int day;

	if ((v - a) % (a - b) == 0) 
		day = (v - a) / (a - b);
	else
		day = (v - a) / (a - b) + 1;

	printf("%d\n", day + 1);
}