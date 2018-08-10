#include <stdio.h>
#include <stack>
#include <iostream>
#include <string>

using namespace std;

int main(void){
	int testcase,st1size,st2size;
	string s;
	stack<char> st1,st2;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		cin >> s;
		for(int j=0;j<s.size();j++){
			if(s[j]=='<'){
				if(!st1.empty()){
					st2.push(st1.top());
					st1.pop();
				}
			}
			else if(s[j]=='>'){
				if(!st2.empty()){
					st1.push(st2.top());
					st2.pop();
				}
			}
			else if(s[j]=='-'){
				if(!st1.empty()){
					st1.pop();
				}
			}
			else{
				st1.push(s[j]);
			}
		}
		st1size=st1.size();
		for(int j=0;j<st1size;j++){
			if(!st1.empty()){
				st2.push(st1.top());
				st1.pop();
			}
		}
		st2size=st2.size();
		for(int j=0;j<st2size;j++){
			if(!st2.empty()){
				printf("%c",st2.top());
				st2.pop();
			}
		}
		printf("\n");
	}
}