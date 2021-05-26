#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(void){
	int testcase,maxNum=0,arr[101][101],cnt=1,check=1;
	scanf("%d",&testcase);
	for(int i=0;i<9;i++){
		for(int j=0;j<testcase;j++){
			scanf("%d",&arr[i][j]);
			maxNum = max(arr[i][j],maxNum);
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<testcase;j++){
			if(arr[i][j]!=maxNum) cnt++;
			else {
				check=0;
				break;
			}
		}
		if(check==0) break;
	}
	if((float)cnt/testcase<=1) printf("PROBRAIN\n");
	else if((float)cnt/testcase<=2) printf("GROW\n");
	else if((float)cnt/testcase<=3) printf("ARGOS\n");
	else if((float)cnt/testcase<=4) printf("ADMIN\n");
	else if((float)cnt/testcase<=5) printf("ANT\n");
	else if((float)cnt/testcase<=6) printf("MOTION\n");
	else if((float)cnt/testcase<=7) printf("SPG\n");
	else if((float)cnt/testcase<=8) printf("COMON\n");
	else if((float)cnt/testcase<=9) printf("ALMIGHTY\n");
}