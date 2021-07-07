#include <cstdio>

using namespace std;

int main(void) {
	int ax, ay, az;
	int cx, cy, cz;
	scanf("%d%d%d", &ax, &ay, &az);
	scanf("%d%d%d", &cx, &cy, &cz);
	printf("%d %d %d\n",cx-az, cy/ay,cz-ax);
}