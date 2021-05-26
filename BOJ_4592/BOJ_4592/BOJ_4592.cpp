#include <stdio.h>

int main(void){
	int saveArr[30];
	int testcase=1;
	while(testcase!=0){
		scanf("%d",&testcase);
		for(int i=0;i<testcase;i++){
			scanf("%d",&saveArr[i]);
		}
		for(int i=0;i<testcase-1;i++){
			if(saveArr[i+1]==saveArr[i]) saveArr[i]=0;
		}
		for(int i=0;i<testcase;i++){
			if(saveArr[i]==0) continue;
			printf("%d ",saveArr[i]);
		}
		if(testcase!=0) printf("$\n");
	}
}