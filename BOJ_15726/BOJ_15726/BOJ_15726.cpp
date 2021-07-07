#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%d", int(max(a * b / c, a / b * c)));
	
}