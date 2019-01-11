#include <stdio.h>
#include <string.h>

int main(void){
	char arr[101];
	scanf("%s",arr);
	int len = strlen(arr);
	for(int i=0;i<len;i++){
		if(arr[i]>='A' && arr[i]<='Z'){
			printf("%c",arr[i]+32);
		}
		else if(arr[i]>='a' && arr[i]<='z'){
			printf("%c",arr[i]-32);
		}
	}
	printf("\n");
}