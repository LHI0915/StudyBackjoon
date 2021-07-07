#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	int br, bc, dr, dc, jr, jc;
	scanf("%d%d", &br, &bc);
	scanf("%d%d", &dr, &dc);
	scanf("%d%d", &jr, &jc);

	int cntB = max(abs(jr - br), abs(jc - bc));
	int cntD = abs(jr - dr) + abs(jc - dc);

	if (cntB > cntD) printf("daisy\n");
	else if (cntB < cntD) printf("bessie\n");
	else printf("tie\n");
}