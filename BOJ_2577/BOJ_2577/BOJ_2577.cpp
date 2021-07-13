#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int arr[10] = { 0, };
	int a, b, c;
	cin >> a >> b >> c;
	int result = a * b * c;
	string sresult = to_string(result);
	for (int i = 0; i < sresult.length(); i++) {
		arr[sresult[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}

}