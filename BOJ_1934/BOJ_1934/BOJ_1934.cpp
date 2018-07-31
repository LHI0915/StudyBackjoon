#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(void){
	int num1,num2,ans,maxG,testcase;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&num1,&num2);
		ans=min(num1,num2);
		for(int j=1;j<=ans;j++){
			if(num1%j==0 && num2%j==0){
				maxG=j;
			}
		}
		printf("%d\n",(num1*num2)/maxG);
	}
	
}