#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	vector<string> save;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		save.push_back(s.substr(i,s.size()));
	}
	sort(save.begin(),save.end());
	for(int i=0;i<s.size();i++){
		cout << save[i] << endl;
	}
	
}