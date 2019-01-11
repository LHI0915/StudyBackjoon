#include <stdio.h>

int gcd(int a, int b){ //최대 공약수를 구함
	if(b==0){
		return a;
	}else{
		gcd(b,a%b);
	}
}
int main(void){
	int a,b,c,d,gcdNum,lcmNum,finalUp;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	gcdNum=gcd(b,d); //분모의 최대 공약수
	lcmNum=(b*d)/gcdNum; //분모의 최소 공배수(통분)
	a=a*(lcmNum/b); //통분 했을 때의 분자
	c=c*(lcmNum/d); //통분 했을 때의 분자
	finalUp=a+c; //분자의 합
	gcdNum=gcd(finalUp,lcmNum); //분모와 분자의 최대공약수
	printf("%d %d\n",finalUp/gcdNum,lcmNum/gcdNum);
	
}