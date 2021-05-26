#include <stdio.h>


int gcd(int a, int b){
	if(b==0) return a;
	else gcd(b,a%b);
}
int main(void){
	int n,a,b,c;
	scanf("%d",&n);
	if(n==2){
		scanf("%d%d",&a,&b);
		int num = gcd(a,b);
		for(int i=1;i<=num;i++){
			if(num%i==0){
				printf("%d\n",i);
			}
		}
	}else{
		scanf("%d%d%d",&a,&b,&c);
		int num = gcd(a,gcd(b,c));
		for(int i=1;i<=num;i++){
			if(num%i==0){
				printf("%d\n",i);
			}
		}
	}
}