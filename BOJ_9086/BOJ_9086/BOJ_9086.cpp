#include <stdio.h>
#include <string.h>

int main(void){
	int testcase;
	char arr[1001];
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%s",arr);
		int len=strlen(arr);
		printf("%c%c\n",arr[0],arr[len-1]);
	}
}