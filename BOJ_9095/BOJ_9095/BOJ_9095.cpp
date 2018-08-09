#include <stdio.h>

int main(void){
	int testcase,n,dp[20];
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&n);
		dp[1]=1; dp[2]=2; dp[3]=4;
		for(int j=4;j<=n;j++){
			dp[j]=dp[j-1]+dp[j-2]+dp[j-3];
		}
		printf("%d\n",dp[n]);
	}
}