#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	int n,cnt=0;
	char front = ' ';
	cin >> n;
	while (n--) {
		stack<char> st;
		string str;
		front = ' ';
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (!st.empty()) {
				front = st.top();
			}
			if (str[i] == 'A') {
				if (front == 'A') {
					st.pop();
					front = ' ';
				}else
					st.push('A');
			}
			else if (str[i] == 'B') {
				if (front == 'B') {
					st.pop();
					front = ' ';
				}
				else
					st.push('B');
			}
			
		}
		if (st.empty()) cnt++;
	}

	cout << cnt;
}