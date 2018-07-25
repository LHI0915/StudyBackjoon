#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int count=0,arr[10],saveArr[1000],testcase,max=0;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		for(int j=0;j<10;j++){
			scanf("%d",&arr[j]);
		}
		sort(arr,arr+10);
		printf("%d\n",arr[7]);
	}
}