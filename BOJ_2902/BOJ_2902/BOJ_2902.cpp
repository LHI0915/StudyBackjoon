#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A' && s[i]<='Z'){
			printf("%c",s[i]);
		}
	}
	printf("\n");
}