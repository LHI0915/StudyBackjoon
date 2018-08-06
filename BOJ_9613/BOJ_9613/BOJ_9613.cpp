#include <stdio.h>

int gcd(int a,int b){
	if(b==0) return a;
	else gcd(b,a%b);
}
int main(void){
	int testcase,num,number[101],minN,maxN;
	long long int sum=0;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&num);
		for(int j=0;j<num;j++){
			scanf("%d",&number[j]);
		}
		for(int m=0;m<num-1;m++){
			for(int j=m+1;j<num;j++){
				sum+=gcd(number[m],number[j]);
			}
		}
		printf("%lld\n",sum);
		sum=0;
	}
}