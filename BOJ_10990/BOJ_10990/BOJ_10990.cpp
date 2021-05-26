#include <stdio.h>

//중간에 스페이스가 1,3,5,7.. 순서
//앞에 스페이스는 n-1부터 띄움
/*
	printf("   *\n");
	printf("  * *\n");
	printf(" *   *\n");
	printf("*     *\n");
*/
int main(void){
	int n,m=2;
	scanf("%d",&n);
	for(int j=0;j<n-1;j++){
		printf(" ");
	}
	printf("*\n");
	for(int i=1;i<n;i++){
		for(int j=0;j<n-(i+1);j++){
			printf(" ");
		}
		printf("*");
		for(int k=0;k<2*(m-1)-1;k++){
			printf(" ");
		}
		printf("*\n");
		m++;
	}
}