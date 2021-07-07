#include <cstdio>

using namespace std;

int main(void) {
	int t,n;
	char first, second;
	scanf("%d", &t);
	while (t--) {
		int first_win = 0, second_win = 0;
		scanf("%d", &n);
		getchar();
		for (int i = 0; i < n; i++) {
			scanf("%c\n%c", &first, &second);
			getchar();
			if (first == 'P' && second == 'R') first_win++;
			else if (first == 'R' && second == 'S') first_win++;
			else if (first == 'S' && second == 'P') first_win++;
			else if (first == 'R' && second == 'P') second_win++;
			else if (first == 'S' && second == 'R') second_win++;
			else if (first == 'P' && second == 'S') second_win++;
			else continue;

		}

		if (first_win > second_win) printf("Player 1\n");
		else if (first_win < second_win) printf("Player 2\n");
		else printf("TIE\n");

	}
	

}