#include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	printf("%c%d\n",(n+8)%12+'A',(n+6)%10);
	
}