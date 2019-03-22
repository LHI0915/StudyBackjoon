#include <cstdio>
#include <algorithm>

using namespace std;

int main(void){
	int arr[9],sum=0,subnum,first=0,last=8;
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	subnum=sum-100;
	sort(arr,arr+9);
	while(first<last){
		if(arr[first]+arr[last]==subnum){
			arr[first]=0;
			arr[last]=0;
			break;
		}
		else if(arr[first]+arr[last]>subnum){
			last=last-1;
		}
		else if(arr[first]+arr[last]<subnum){
			first=first+1;
		}
	}
	for(int i=0;i<9;i++){
		if(arr[i]!=0){
			printf("%d\n",arr[i]);
		}
	}



}