#include <stdio.h>

int main(void){
	int testcase,count=0,sum=0,score;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&score);
		if(score==1) count++;
		else if(score==0) count=0;
		sum=sum+count;
	}
	printf("%d\n",sum);
}