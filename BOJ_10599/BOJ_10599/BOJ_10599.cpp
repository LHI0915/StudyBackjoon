#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void){
	int age[4],minus=0;
	while(1){
		for(int i=0;i<4;i++){
			scanf("%d",&age[i]);
		}
		if(age[0]==0 && age[1]==0 && age[2]==0 && age[3]==0) break;
		printf("%d %d\n",age[2]-age[1],age[3]-age[0]);
	
	}
}