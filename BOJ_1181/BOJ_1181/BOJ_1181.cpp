#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> vec(20001);

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else return a.length() < b.length();
}
int main(void) {
	int t;
	cin >> t;
	vec.resize(t);
	for (int i = 0; i < t; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end(), compare);
	
	string temp=" ";
	for (int i = 0; i < t; i++) { 
		if (temp == vec[i]) continue;
		cout << vec[i] << '\n';
		temp = vec[i];
	}
	

	
}