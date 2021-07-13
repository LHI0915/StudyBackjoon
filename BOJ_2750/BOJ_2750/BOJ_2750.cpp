#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	int t;
	int arr[1001];
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + t);
	for (int i = 0; i < t; i++) {
		cout << arr[i] << '\n';
	}

}