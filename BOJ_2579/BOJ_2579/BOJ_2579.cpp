#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase,a[10001]={0,},dp[10001]={0,};
	scanf("%d",&testcase);
	for(int i=1;i<=testcase;i++){
		scanf("%d",&a[i]);
	}
	dp[1]=a[1];
	dp[2]=a[1]+a[2];
	for(int i=3;i<=testcase;i++){
		dp[i]=max(dp[i-2]+a[i],dp[i-3]+a[i-1]+a[i]);
	}
	printf("%d\n",dp[testcase]);
}