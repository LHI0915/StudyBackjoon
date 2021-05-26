#include <stdio.h>

int main(void){
	long long int d[101][10]={0,},ans=0;
	long long int mod=1000000000;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=9;i++){
		d[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(j-1<0){
				d[i][j]=d[i-1][1];
			}
			else if(j+1>9){
				d[i][j]=d[i-1][8];
			}
			else
				d[i][j]=(d[i-1][j+1]+d[i-1][j-1])%mod;
		}
	}
	for(int i=0;i<=9;i++) ans+=d[n][i];
	printf("%d\n",ans%mod);
}
