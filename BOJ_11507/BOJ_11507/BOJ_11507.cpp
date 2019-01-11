#include <stdio.h>
#include <string.h>

int main(void){
	char str[1001],saveShape;
	int cnt[4]={0,},check[14][4]={0,},len;
	scanf("%s",str);
	len=strlen(str);
	for(int i=0;i<len;i+=3){
		int a=str[i+1]-'0';
		int b=str[i+2]-'0';
		int c= a*10+b;

		switch(str[i]){
		case 'P': saveShape=0; break;
		case 'K': saveShape=1; break;
		case 'H': saveShape=2; break;
		case 'T': saveShape=3; break;
		}

		if(check[c][saveShape]){
			printf("GRESKA\n");
			return 0;
		}
		check[c][saveShape]=1;
		cnt[saveShape]++;
	}
	for(int i=0;i<4;i++){
		printf("%d ",13-cnt[i]);
	}
	printf("\n");
}