#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int main(void){
	int num1,num2,ans,maxG;
	scanf("%d%d",&num1,&num2);
	ans=min(num1,num2);
	for(int i=1;i<ans;i++){
		if(num1%i==0 && num2%i==0){
			maxG=i;
		}
	}
	printf("%d\n%d\n",maxG,(num1*num2)/maxG);
}