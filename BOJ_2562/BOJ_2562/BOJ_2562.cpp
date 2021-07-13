#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int maxnum=0, maxindex;
	for (int i = 0; i < 9; i++) {
		int a;
		cin >> a;
		if (maxnum < a) {
			maxnum = a;
			maxindex = i + 1;
		}
	}

	cout << maxnum << '\n' << maxindex;
}