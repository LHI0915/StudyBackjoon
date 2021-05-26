#include <stdio.h>

int main(void){
	int num;
	scanf("%d",&num);
	for(int i=2;i*i<=num;i++){
		while(num%i==0){
			printf("%d\n",i);
			num=num/i;
		}
	}
	if(num>1){
		printf("%d\n",num);
	}
}