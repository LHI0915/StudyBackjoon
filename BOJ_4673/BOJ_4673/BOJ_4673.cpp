#include <cstdio>

using namespace std;

int main(void) {	
	bool arr[10036] = { false, };
	for (int i = 1; i <= 10000; i++) {
		int result = 0;
		if (i >= 1 && i <= 9) {
			result = i + i;
		}
		else {
			int n = i;
			result = result + n;
			while (n != 0) {
				result += (n % 10);
				n = n / 10;
			}
		}
		arr[result] = true;
		if (arr[i] == false) printf("%d\n", i);
	}
}