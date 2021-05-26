#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase,a[10001],dp[10001],ans;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&a[i]);
	}
	dp[0]=a[0];
	for(int i=1;i<testcase;i++){
		dp[i]=max(dp[i-1]+a[i],a[i]);
	}
	ans=dp[0];
	for(int i=0;i<testcase;i++){
		ans=max(ans,dp[i]);
	}
	printf("%d\n",ans);
}