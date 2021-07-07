#include <cstdio>

using namespace std;

int main(void) {
	int a,b,c,d;
	for (int i = 0; i < 3; i++) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		int result = 4 - (a + b + c + d);
		if (result == 0) printf("E\n");
		else if (result == 1) printf("A\n");
		else if (result == 2) printf("B\n");
		else if (result == 3) printf("C\n");
		else printf("D\n");
		
	}
	
}