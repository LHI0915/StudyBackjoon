#include <stdio.h>

int main(void){
	int testcase,a,b,awin=0,bwin=0;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&a,&b);
		if(a>b) awin++;
		else if(a<b) bwin++;
		else continue;
	}
	printf("%d %d\n",awin,bwin);
}