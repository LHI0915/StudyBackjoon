#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int n,dp[10001];
	scanf("%d",&n);
	fill_n(dp,10001,100000);
	dp[0]=0; dp[1]=1;
	for(int i=2;i<=10;i++){
		for(int j=1;j*j<=i;j++){
			dp[i] = min(dp[i],dp[i-j*j]+1);
		}
	}
	printf("%d\n",dp[n]);
}