#include <stack>
#include <queue>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
	int testcase,num,cnt=2,k=2,check=1;
	stack<int> st1,st2;
	queue<char> stOP;
	scanf("%d",&testcase);
	st2.push(1);
	stOP.push('+');
	for(int i=0;i<testcase;i++){
		scanf("%d",&num);
		st1.push(num);
		while(check){
			if(st2.empty() ||st1.top()!=st2.top() && st2.top()!=num){
				if(!st2.empty() && st1.top()<st2.top()) check=0;
				stOP.push('+');
				st2.push(cnt++);
				k++;
			}
			else if(st1.top()==st2.top()){
				stOP.push('-');
				st2.pop(); st1.pop();
				k++;
				break;
			}
		}
	}
	if(!check) printf("NO\n");
	else{
		for(int i=0;i<k;i++){
			if(!stOP.empty()){
				printf("%c\n",stOP.front());
				stOP.pop();
			}
		}
	}

}