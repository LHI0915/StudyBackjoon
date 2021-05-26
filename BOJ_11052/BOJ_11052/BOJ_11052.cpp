#include <stdio.h>
#include <algorithm>


using namespace std;

int main(void){
	int dp[1001];
	int n;
	int p[10001];
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&p[i]);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=0;
		for(int j=1;j<=i;j++){
			dp[i]=max(dp[i],dp[i-j]+p[j]);
		}
	}
	printf("%d\n",dp[n]);
}