#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int slength,cnt=0;
	string s;
	cin >> slength;
	cin >> s;

	for (int i = 0; i < slength; i++) {
		if (s[i] == 'e') cnt++;
		else cnt--;
	}

	if (cnt == 0) printf("yee\n");
	else if (cnt > 0) printf("e\n");
	else printf("%d\n", 2);

}