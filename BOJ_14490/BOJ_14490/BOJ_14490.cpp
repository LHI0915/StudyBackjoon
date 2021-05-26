#include <stdio.h>

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		gcd(b,a%b);
	}
}
int main(void){
	int n,m,result;
	scanf("%d:%d",&n,&m);
	result=gcd(n,m);
	printf("%d:%d\n",n/result,m/result);
}