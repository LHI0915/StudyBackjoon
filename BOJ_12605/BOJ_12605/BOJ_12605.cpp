#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	int n;
	stack<string> st;
	string temp;	
	cin >> n;
	getchar();
	for(int j=1;j<=n;j++) {
		string arr;
		getline(cin, arr);
		for (int i = 0; i < arr.length(); i++) {
			if (arr[i] == ' ') { 
				st.push(temp); 
				temp.clear(); 
			}
			else temp += arr[i];
		}
		if (!temp.empty()) st.push(temp);
		temp.clear();

		int size = st.size();
		cout << "Case #" << j << ": ";
		for (int i = 0; i < size; i++) {
			cout << st.top() << ' ';
			st.pop();
		}
		cout << "\n";
		
	}
	
}