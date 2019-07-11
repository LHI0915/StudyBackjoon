#include <cstdio>
#include <string.h>

using namespace std;
int dx[8]={1,1,1,0,0,-1,-1,-1};
int dy[8]={1,0,-1,1,-1,1,0,-1};
int vis[51][51];
void dfs(int x, int y, int height, int width){
	vis[x][y]=0;
 	for(int i=0;i<8;i++){
		int savex=x+dx[i];
		int savey=y+dy[i];
		if(savex<0 || savex>=height || savey<0 || savey>=width){
			continue;
		}
		if(vis[savex][savey]==1){
			dfs(savex,savey,height,width);
		}
	}
}
int main(void){
	int width,height,cnt=0;
	while(1){
		scanf("%d%d",&width,&height);
		if(width==0 && height==0) break;
		memset(vis,0,50);
		for(int i=0;i<height;i++){
			for(int j=0;j<width;j++){
				scanf("%d",&vis[i][j]);
			}
		}
		for(int i=0;i<height;i++){
			for(int j=0;j<width;j++){
				if(vis[i][j]==1){
					dfs(i,j,height,width);
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		cnt=0;
	}
}