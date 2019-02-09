#include <stdio.h>

int main(void){
	int arr[5],tmp,check=0;
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
			}
		}
		
	}
}