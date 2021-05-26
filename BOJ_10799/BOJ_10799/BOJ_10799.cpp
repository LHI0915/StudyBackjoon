#include <stdio.h>
#include <stack>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	stack<int> s;
	string str;
	int ans=0;
	cin >> str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='('){
			s.push(i);
		}
		else if(str[i]==')' && s.top()+1==i){
			s.pop();
			ans+=s.size();
		}
		else if(str[i]==')' && s.top()+1!=i){
			s.pop();
			ans+=1;
		}
	}
	printf("%d\n",ans);
	
	
}