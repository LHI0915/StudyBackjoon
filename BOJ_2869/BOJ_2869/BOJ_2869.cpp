#include <stdio.h>

int main(void){
	int a,b,v;
	scanf("%d%d%d",&a,&b,&v);
	long long int left=0;
	long long int right=1000000000;
	long long int ans=0;
	while(left<=right){
		long long int mid = (left+right)/2;
		if((a-b)*mid+a >= v){
			ans=mid;
			right = mid-1;
		}else{
			left = mid+1;
		}
	}
	printf("%d\n",ans+1);
}