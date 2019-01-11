#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int maxNum=0,minNum=0,testcase,arr[1001],dp[1001],dp1[1001],saveIndex=1;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<testcase;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
		maxNum = max(maxNum,dp[i]);
	}
	for(int i=testcase-1;i>=0;i--){
		dp1[i]=1;
		for(int j=testcase-1;j>=i;j--){
			if(arr[i]>arr[j]){
				dp1[i]=max(dp1[i],dp1[j]+1);
			}
		}
		minNum=max(minNum,dp1[i]);
	}
	int ans=dp[0]+dp1[0];
	for(int i=0;i<testcase;i++){
		if(ans< dp[i]+dp1[i]) ans=dp[i]+dp1[i];
	}
	printf("%d\n",ans-1);
}