#include <stdio.h>

int main(void){
	int num,k=0,div=2,sum=0;
	scanf("%d",&num);
	while(k!=num){
		sum+=div;
		k++;
		if(k!=1 && k%2==1){
			div++;
		}
		
	}
	printf("%d\n",sum);
}