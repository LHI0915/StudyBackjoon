#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int n,k,arr[1001],mul=0,maxNum;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++){
		arr[i]=i*n;
	}
	for(int i=1;i<=k;i++){
		while(arr[i]!=0){
			mul=mul*10+(arr[i]%10);
			arr[i]=arr[i]/10;
		}
		arr[i]=mul;
		mul=0;
	}
	sort(arr,arr+k+1);
	printf("%d\n",arr[k]);
}