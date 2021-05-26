#include <stdio.h>

int main(void){
	long long int dp[101];
	int ts,n;
	dp[1]=dp[2]=dp[3]=1;
	dp[4]=dp[5]=2;
	scanf("%d",&ts);
	while(ts--){
		scanf("%d",&n);
		for(int i=6;i<=n;i++){
			dp[i]=dp[i-1]+dp[i-5];
		}
		printf("%lld\n",dp[n]);
	}
	
}