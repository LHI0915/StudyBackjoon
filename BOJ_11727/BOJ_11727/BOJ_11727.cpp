#include <stdio.h>

int main(void){
	int dp[1001];
	int n;
	scanf("%d",&n);
	dp[1]=1;
	dp[2]=3;
	for(int i=3;i<=n;i++){
		dp[i]=(dp[i-1]+2*dp[i-2])%10007;
	}
	printf("%d\n",dp[n]);
}