#include <iostream>
#include <stdio.h>
#include <stack>
#include <string>

using namespace std;

int main(void){
	string s;
	stack<char> st,st2;
	int testcase,stSize,st2Size;
	char what;
	cin >> s;
	scanf("%d",&testcase);
	for(int i=0;i<s.size();i++){
		st.push(s[i]);
	}
	for(int i=0;i<testcase;i++){
		scanf(" %c",&what);
		if(what=='L'){
			if(!st.empty()){
				st2.push(st.top());
				st.pop();
			}
		}
		else if(what=='D'){
			if(!st2.empty()){
				st.push(st2.top());
				st2.pop();
			}
		}
		else if(what=='B'){
			if(!st.empty())
				st.pop();
		}
		else if(what=='P'){
			char alpha;
			scanf(" %c",&alpha);
			st.push(alpha);
		}
	}
	stSize=st.size();
	for(int i=0;i<stSize;i++){
		st2.push(st.top());
		st.pop();
	}
	st2Size=st2.size();
	for (int i=0;i<st2Size;i++){
		printf("%c",st2.top());
		st2.pop();
	}
	printf("\n");
}