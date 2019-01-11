#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void){
	int check[5]={0,};
	int testcase=0,flag=1;
	string arr;
	while(testcase<5){
		cin >> arr;
		for(int i=0;i<arr.size();i++){
			if(arr[i]=='F' && arr[i+1]=='B' && arr[i+2]=='I'){
				check[testcase]=1;
				break;
			}
		}
		testcase++;
	}
	for(int i=0;i<5;i++){
		if(check[i]==1){
			printf("%d ",i+1);
			flag=0;
		}
	}
	if(flag==1){
		printf("HE GOT AWAY!\n");
	}
	else{
		printf("\n");
	}
}