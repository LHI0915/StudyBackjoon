#include <queue>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(void){
	queue<int> qu;
	char s[10];
	int testcase;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%s",s);
		if(strcmp(s,"push")==0){
			int num;
			scanf(" %d",&num);
			qu.push(num);
		}
		else if(strcmp(s,"front")==0){
			if(!qu.empty())
				printf("%d\n",qu.front());
			else printf("-1\n");
		}
		else if(strcmp(s,"back")==0){
			if(!qu.empty())
				printf("%d\n",qu.back());
			else printf("-1\n");
		}
		else if(strcmp(s,"pop")==0){
			if(!qu.empty()){
				printf("%d\n",qu.front());
				qu.pop();
			}
			else printf("-1\n");

		}
		else if(strcmp(s,"size")==0){
			printf("%d\n",qu.size());
		}
		else if(strcmp(s,"empty")==0){
			if(!qu.empty()) printf("0\n");
			else printf("1\n");
		}
	}
}