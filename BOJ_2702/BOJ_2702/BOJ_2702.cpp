#include <stdio.h>

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		gcd(b,a%b);
	}
}
int main(void){
	int testcase,num1,num2,result;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&num1,&num2);
		result=gcd(num1,num2);
		printf("%d %d\n",(num1*num2)/result,result);
	}
}