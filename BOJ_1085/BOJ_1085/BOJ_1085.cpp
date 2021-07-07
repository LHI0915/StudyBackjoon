#include <cstdio>

using namespace std;

int main(void) {
	int x, y, w, h;
	int minx, miny;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	(w - x) >= x ? minx = x : minx = w - x;
	(h - y) >= y ? miny = y : miny = h - y;
	if (miny >= minx) printf("%d\n", minx);
	else printf("%d\n", miny);
}