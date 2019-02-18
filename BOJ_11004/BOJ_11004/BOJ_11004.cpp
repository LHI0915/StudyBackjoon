#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase,k;
	long long int arr[5000001];
	scanf("%d%d",&testcase,&k);
	for(int i=0;i<testcase;i++){
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+testcase);
	printf("%lld\n",arr[k-1]);
}