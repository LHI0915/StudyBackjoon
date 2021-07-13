#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	int ia = stoi(a);
	int ib = stoi(b);

	string result = to_string(ia + ib); 
	
	reverse(result.begin(), result.end());

	int cnt = 0;
	for (int i = 0; result[i] == '0'; i++) 
		cnt++;

	cout << result.substr(cnt,result.length()-cnt);
}