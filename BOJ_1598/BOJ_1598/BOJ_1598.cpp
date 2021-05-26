#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int x,y,widthF=0,heightF=1,widthS=0,heightS=1,maxW=0,maxH=0;
	scanf("%d%d",&x,&y);
	for(int i=1;i<=x;i++){
		if(i%4==1){
			widthF++;
			heightF=1;
		}else{
			heightF++;
		}
	}
	for(int i=1;i<=y;i++){
		if(i%4==1){
			heightS=1;
			widthS++;
		}else{
			heightS++;
		}
	}
	maxW= max(widthF-widthS,widthS-widthF);
	maxH = max(heightF-heightS,heightS-heightF);
	printf("%d\n",maxH+maxW);
}