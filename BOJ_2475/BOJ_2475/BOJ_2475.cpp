#include <stdio.h>

int main(void){
	int i=5,sum=0,num;
	while(i--){
		scanf("%d",&num);
		sum=sum+(num*num);
	}
	printf("%d\n",sum%10);
}