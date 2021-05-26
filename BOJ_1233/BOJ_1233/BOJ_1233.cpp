#include <stdio.h>

int main(void){
	int s1,s2,s3,arr[100]={0,},max;
	scanf("%d%d%d",&s1,&s2,&s3);
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				arr[i+j+k]++;
			}
		}
	}
	max=arr[0];
	for(int i=2;i<61;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(max==arr[i]){
			continue;
		}
	}
	for(int i=1;i<61;i++){
		if(arr[i]==max){
			printf("%d\n",i);
			break;
		}
	}
}