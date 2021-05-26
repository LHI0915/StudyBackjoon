#include <cstdio>

using namespace std;

int main(void){
	int n,dp[31]={0,},result[31]={0,};
	scanf("%d",&n);
	dp[0]=1; dp[2]=3; result[0]=1;
	for(int i=4;i<=30;i+=2){
		dp[i]=2;
	}
	for(int i=2;i<=n;i+=2){
		for(int j=2;j<=i;j+=2){
			result[i]=result[i]+dp[j]*result[i-j];
		}
	}
	printf("%d\n",result[n]);


}