#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int ans=0,testcase,arr[1001],count=1,dp[1001],check=0;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<testcase;i++){
		dp[i]=arr[i];
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i]=max(dp[i],dp[j]+arr[i]);
			}
		}
		ans=max(ans,dp[i]);
	}
	printf("%d\n",ans);
}