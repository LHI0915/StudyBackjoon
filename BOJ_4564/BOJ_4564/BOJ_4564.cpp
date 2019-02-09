#include <stdio.h>

int main(void){
	int savenum1,savenum2,s,cnt=0;
	while(1){
		scanf("%d",&s);
		if(s==0) break;
		while(s>=10){
			printf("%d ",s);
			savenum1=s;
			savenum2=s;
			while(savenum1!=0){
				savenum1/=10;
				cnt++;
			}
			s=1;
			for(int i=0;i<cnt;i++){
				s=s*(savenum2%10);
				savenum2=savenum2/10;
			}
			cnt=0;
		}
		printf("%d\n",s);
		
	}
}