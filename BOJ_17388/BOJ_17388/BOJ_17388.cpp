#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	int s, k, h;
	scanf("%d%d%d", &s, &k, &h);
	if (s + k + h >= 100) printf("OK\n");
	else {
		int result = min(s, min(k, h));
		if (result == s) printf("Soongsil\n");
		else if (result == k) printf("Korea\n");
		else printf("Hanyang\n");
	}
}