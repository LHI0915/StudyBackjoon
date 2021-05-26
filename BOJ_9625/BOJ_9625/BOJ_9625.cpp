#include <stdio.h>

int main(void){
	int n,a[46]={1,0,},b[46]={0,1,};
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	printf("%d %d\n",a[n],b[n]);


}