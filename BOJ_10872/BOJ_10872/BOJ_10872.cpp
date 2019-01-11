#include <stdio.h>

int main(void){
	int n;
	long long int mul=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		mul=mul*i;
	}
	printf("%lld\n",mul);
}