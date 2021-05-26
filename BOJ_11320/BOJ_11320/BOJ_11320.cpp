#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	int testcase,a,b,triNum=1,sum=1;
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d%d",&a,&b);
		for(int i=1;i<a/b;i++){
			triNum+=2;
			sum=sum+triNum;
		}
		printf("%d\n",sum);
		triNum=1; sum=1;
	}
}