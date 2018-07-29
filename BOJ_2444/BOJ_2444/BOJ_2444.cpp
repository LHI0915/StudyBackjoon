#include <stdio.h>

int main(void){
	int testcase,count=0,j;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		for(j=i;j<testcase-1;j++){
			printf(" ");
		}
		for(int k=j;k<testcase+count;k++){
			printf("*");
		}
		printf("\n");count+=2;
	}
	for(int i=0;i<testcase-1;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
		for(int k=j;k<=(testcase*2-1)-(i+2);k++){
			printf("*");
		}
		printf("\n");
	}
}