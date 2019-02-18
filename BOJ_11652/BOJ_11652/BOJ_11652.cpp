#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase,a=0,maxcnt;
	long long int arr[10001],savecnt[10001],maxnum,cnt=1;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+testcase);
	for(int i=1;i<testcase;i++){
		if(arr[i]==arr[i-1]){
			cnt++;
		}else{
			cnt=1;
		}
		savecnt[a++]=cnt;
	}
	maxcnt=savecnt[0];
	maxnum=arr[0];
	for(int i=0;i<testcase;i++){
		if(maxcnt<savecnt[i]){
			maxnum=arr[i];
			maxcnt=savecnt[i];
		}


	}
	printf("%lld\n",maxnum);

}