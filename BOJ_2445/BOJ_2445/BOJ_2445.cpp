#include <stdio.h>

int main(void){
	int testcase,j,k,m,n;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(k=j;k<testcase;k++){
			printf(" ");
		}
		for(m=1;m<k-i;m++){
			printf(" ");
		}
		for(n=0;n<=i;n++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=1;i<testcase;i++){
		for(j=i;j<testcase;j++){
			printf("*");
		}
		for(k=0;k<i;k++){
			printf(" ");
		}
		for(m=0;m<i;m++){
			printf(" ");
		}
		for(n=i;n<testcase;n++){
			printf("*");
		}
		printf("\n");

	}
}