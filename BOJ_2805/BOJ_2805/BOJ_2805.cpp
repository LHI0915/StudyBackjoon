#include <stdio.h>
#include <algorithm>

using namespace std;

long long int arr[1000001];
long long int cutTree(int n, long long int mid){
	long long int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]-mid>0){
			ans+=(arr[i]-mid);
		}
	}
	return ans;
}
int main(void){
	int n;
	long long int m,maxNum=0;
	scanf("%d%lld",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		maxNum = max(maxNum,arr[i]);
	}
	long long int left=0,right=maxNum;
	long long int mid,ans=0;
	while(left<=right){
		mid=(left+right)/2;
		if(cutTree(n,mid)>=m){
			if(ans < mid){
				ans=mid;
			}
			left=mid+1;
		}else if(cutTree(n,mid)<m){
			right=mid-1;
		}
	}
	printf("%lld\n",ans);
	
}
