#include <stdio.h>
#include <string.h>

int main(void){
	char s[101],saveS[101];
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if((s[i]<='0' && s[i]<='9') || s[i]==' '){
			saveS[i]=s[i];
		}
		else
			saveS[i]=(char)(s[i]+13);
	}
	for(int i=0;i<len;i++){
		printf("%c",saveS[i]);
	}
}