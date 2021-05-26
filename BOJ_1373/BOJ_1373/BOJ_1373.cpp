#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	string s;
	vector<int> saves;
	int ans=0,j;
	cin >> s;
	reverse(s.begin(),s.end());
	while(s.size()%3!=0)
		s+='0';
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
		for(j=i;j<i+3;j++){
			ans=ans*2+(s[j]-'0');
		}
		saves.push_back(ans);
		ans=0;
		i=j-1;
	}
	for(int i=0;i<saves.size();i++){
		printf("%d",saves[i]);
	}
	printf("\n");

}