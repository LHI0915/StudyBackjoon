#include <cstdio>

using namespace std;

int main(void) {
	int first_p, first_h;
	int second_p, second_h;
	scanf("%d%d", &first_p, &first_h);
	scanf("%d%d", &second_p, &second_h);
	while (first_h > 0 && second_h > 0) {
		first_h -= second_p;
		second_h -= first_p;
	}
	if (first_h <= 0 && second_h <= 0) printf("DRAW\n");
	else if (first_h <= 0) printf("PLAYER B\n");
	else if (second_h <= 0) printf("PLAYER A\n");
	

	
}