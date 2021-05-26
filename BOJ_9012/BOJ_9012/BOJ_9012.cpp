#include <stdio.h>
#include <string.h>

int main(void){
	char s[51];
	int count=0,testcase,len;
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%s",s);
		len=strlen(s);
		for(int j=0;j<len;j++){
			if(s[j]=='(') count++;
			else if(s[j]==')') count--;
		
			if(count<0) break;
		}
		if(count==0) printf("YES\n");
		else printf("NO\n");
		count=0;
	}
	
}