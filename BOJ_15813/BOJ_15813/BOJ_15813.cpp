#include <stdio.h>

int main(void){
	int testcase,sum=0;
	char arr[101];
	scanf("%d\n",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%c",&arr[i]);
		sum=sum+((arr[i]-'A')+1);
	}
	printf("%d\n",sum);
}