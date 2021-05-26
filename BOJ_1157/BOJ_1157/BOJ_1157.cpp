#include <stdio.h>
#include <string.h>

int main(void){
	char alpha[1000001],ans;
	int cnt[26]={0,},maxcnt=0;
	scanf("%s",alpha);
	int len=strlen(alpha);
	for(int i=0;i<len;i++){
		if(alpha[i]>='a' && alpha[i]<='z'){
			cnt[alpha[i]-'a']++;
		}else if(alpha[i]>='A' && alpha[i]<='Z'){
			cnt[alpha[i]-'A']++;
		}
	}
	for(int i=0;i<26;i++){
		if(maxcnt<cnt[i]){
			maxcnt=cnt[i];
			ans=i+65;
		}
		else if(maxcnt==cnt[i]) ans='?';
	}
	printf("%c\n",ans);
}