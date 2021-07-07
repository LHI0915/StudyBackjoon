#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	string str;
	
	while (getline(cin, str)) {
		stack<char> st;
		char front=' ';
		if (str[0] == '.') break;
		for (int i = 0; i < str.length(); i++) {
			if (!st.empty()) front = st.top();
			if (str[i] == '(') {
				st.push('(');
			}
			else if (str[i] == ')') {
				if (front == '(') {
					st.pop();
					front = ' ';
				}
				else {
					st.push(')');
					break;
				}
				
			}

			else if (str[i] == '[') {
				st.push('[');
			}
			else if (str[i] == ']') {
				if (front == '[') {
					st.pop();
					front = ' ';
				}
				else {
					st.push(']');
					break;
				}
			}
		}

		if (!st.empty()) cout << "no" << '\n';
		else cout << "yes" << '\n';

	}
}