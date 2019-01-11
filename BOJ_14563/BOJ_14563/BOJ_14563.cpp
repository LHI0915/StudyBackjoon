#include <stdio.h>

int main(void){
	int testcase,num,arr[10001],sum=0;
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d",&num);
		for(int i=1;i<num;i++){
			if(num%i==0){
				sum+=i;
			}
		}
		if(sum==num) printf("Perfect\n");
		else if(sum<num) printf("Deficient\n");
		else printf("Abundant\n");
		sum=0;
	}
}