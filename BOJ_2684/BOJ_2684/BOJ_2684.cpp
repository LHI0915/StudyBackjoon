#include <stdio.h>

int main(void){
	int testcase,saveCount[8]={0,};
	char coin[40];
	scanf("%d",&testcase);
	getchar();
	for(int i=0;i<testcase;i++){
		for(int j=0;j<40;j++){
			scanf("%c",&coin[j]);
		}
		for(int k=0;k<40;k++){
			if(coin[k]=='T' && coin[k+1]=='T' && coin[k+2]=='T'){
				saveCount[0]++;
			}
			else if(coin[k]=='T' && coin[k+1]=='T' && coin[k+2]=='H'){
				saveCount[1]++;
			}
			else if(coin[k]=='T' && coin[k+1]=='H' && coin[k+2]=='T'){
				saveCount[2]++;
			}
			else if(coin[k]=='T' && coin[k+1]=='H' && coin[k+2]=='H'){
				saveCount[3]++;
			}
			else if(coin[k]=='H' && coin[k+1]=='T' && coin[k+2]=='T'){
				saveCount[4]++;
			}
			else if(coin[k]=='H' && coin[k+1]=='T' && coin[k+2]=='H'){
				saveCount[5]++;
			}
			else if(coin[k]=='H' && coin[k+1]=='H' && coin[k+2]=='T'){
				saveCount[6]++;
			}
			else if(coin[k]=='H' && coin[k+1]=='H' && coin[k+2]=='H'){
				saveCount[7]++;
			}
		}
		for(int k=0;k<8;k++){
			printf("%d ",saveCount[k]);
			saveCount[k]=0;
		}
		printf("\n");
		getchar();
	
	}
}