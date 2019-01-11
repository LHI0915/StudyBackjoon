#include <stdio.h>

int main(void){
	int testcase,num,j;
	int arr[2][101];
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d",&num);
		j=num-1;
		printf("Pairs for %d: ",num);
		for(int i=1;i<num;i++){
			if(j<=i) break;
			if(i+j==num && i!=j){
				printf("%d %d",i,j);
				j--;
				if(num>=5 && j-1>i) printf(", ");
			}
		}
		printf("\n");
	}
}