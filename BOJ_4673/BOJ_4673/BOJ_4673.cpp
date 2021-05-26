#include <stdio.h>

int main(void){
	int arr[10036],savenum,ans=0;
	bool check[10036]={false,};
	for(int i=1;i<=10000;i++){
		arr[i]=i;
	}
	for(int i=1;i<=10000;i++){
			savenum=arr[i];
			ans=arr[i];
			while(savenum!=0){
				ans=ans+(savenum%10);
				savenum=savenum/10;
			}
			check[ans]=true;
	}
	for(int i=1;i<=10000;i++){
		if(check[i]==false){
			printf("%d\n",arr[i]);
		}
	}
}
