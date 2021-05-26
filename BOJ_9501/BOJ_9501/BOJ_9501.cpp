#include <stdio.h>

int main(void){
	int testcase,space,count=0,d;
	double vi,fi,ci;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&space,&d);
		for(int j=0;j<space;j++){
			scanf("%lf%lf%lf",&vi,&fi,&ci);
			if(((fi/ci)*vi)>=d) count++;
		}
		printf("%d\n",count);
		count=0;
		
	}
}