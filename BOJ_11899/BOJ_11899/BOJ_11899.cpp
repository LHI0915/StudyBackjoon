#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	string s;
	stack<char> st;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') st.push('(');
		else if (s[i] == ')') {
			if (st.empty() || st.top() == ')') st.push(')');
			else if (st.top() == '(') st.pop();
		}
	}

	cout << st.size();
}