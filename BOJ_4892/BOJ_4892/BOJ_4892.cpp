#include <stdio.h>

int main(void){
	int n0=1,n1,i=1,n2,n3,n4;
	while(n0!=0){
		scanf("%d",&n0);
		n1 = 3*n0;
		if(n0==0) break;
		if(n0%2==1) {
			printf("%d. odd ",i++);
			n2 = (n1+1)/2;
		}
		else if(n0%2==0){
			printf("%d. even ",i++);
			n2 = n1/2;
		}
		n3 = 3 *n2;
		n4 = n3/9;
		printf("%d\n",n4);
	}
	
	
}