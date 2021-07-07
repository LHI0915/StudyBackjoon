#include <iostream>
#include <deque>

using namespace std;

int main(void) {
	int n,flag = 1;
	cin >> n;
	deque<int> dq;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (!dq.empty()) {
		int front = dq.front();
		dq.pop_front();
		if (flag == 1) {
			cout << front << ' ';
			flag = 0;
		}
		else if (flag == 0) {
			dq.push_back(front);
			flag = 1;
		}
	}
}