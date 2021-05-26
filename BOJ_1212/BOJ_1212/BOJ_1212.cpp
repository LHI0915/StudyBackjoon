#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
	char arr[9][4]={"000","001","010","011","100","101","110","111"};
	int i;
	string s,a="",saves="";
	cin >> s;
	for(int i=0;i<s.size();i++){
		a=arr[(s[i]-'0')];
		saves+=a;
	}
	if(s[0]=='0'){ printf("0\n"); return 0;}
	for(i=0;saves[i]=='0';i++){
		continue;
	}
	for(i;i<saves.size();i++){
		printf("%c",saves[i]);
	}
	printf("\n");
	
}