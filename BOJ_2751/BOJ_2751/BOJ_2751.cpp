#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase;
	int arr[100001];
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+testcase);
	for(int i=0;i<testcase;i++){
		printf("%d\n",arr[i]);
	}
}