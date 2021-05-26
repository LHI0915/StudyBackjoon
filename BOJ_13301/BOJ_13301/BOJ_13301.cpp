#include <stdio.h>

int main(void){
	long long int widthU=1,widthD=1,heightL=1,heightR=1,sum=4;
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		sum=0;
		if(i%2==0){
			heightL = widthD+heightL;
			heightR = heightL;
			sum=widthU+widthD+heightL+heightR;
		}else if(i%2==1){
			widthD = widthD+heightL;
			widthU = widthD;
			sum=widthU+widthD+heightL+heightR;
		}
	}
	printf("%lld\n",sum);
}