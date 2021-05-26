#include <stdio.h>

int main(void){
	int dp[1000001];
	int n;
	scanf("%d",&n);
	dp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0 && dp[i]>dp[i/2]+1){
			dp[i]=dp[i/2]+1;
		}
		if(i%3==0 && dp[i]>dp[i/3]+1){
			dp[i]=dp[i/3]+1;
		}
	}
	printf("%ld\n",dp[n]);
}