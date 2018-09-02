#include <stdio.h>

int main(void){
	int testcase,count=0,n,c;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&n,&c);
		while(n>0){
			n=n-c;
			count++;
		}
		printf("%d\n",count);
		count=0;
	}
}