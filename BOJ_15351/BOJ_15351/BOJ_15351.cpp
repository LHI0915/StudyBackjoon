#include <stdio.h>
#include <string.h>
int main(void){
	int testcase,sum=0;
	char str[31];
	scanf("%d\n",&testcase);
	while(testcase--){
		gets(str);
		for(int i=0;str[i]!='\0';i++){
			if(str[i]!=' ')
				sum+=str[i]-'A'+1;
		}
		if(sum==100) printf("PERFECT LIFE\n"); 
		else printf("%d\n",sum);
		sum=0;
	}

}