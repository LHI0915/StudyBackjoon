#include <stdio.h>
#include <string.h>

char arr[101][101];
bool check[101][101];
int n;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
void dfsRGB(int x,int y,char color){
	check[x][y]= true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
		if(check[nx][ny]==false && arr[nx][ny]==color){
			dfsRGB(nx,ny,arr[nx][ny]);
		}
	}
}
void dfsRB(int x, int y, char color){
	check[x][y]=true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
		if((check[nx][ny]==false && arr[nx][ny]==color) ||
			(check[nx][ny]==false && (arr[nx][ny]=='R' && color=='G')) || 
			(check[nx][ny]==false && (arr[nx][ny]=='G' && color=='R'))){
				dfsRB(nx,ny,arr[nx][ny]); 
		}
	}
}
int main(void){
	int cntRGB=0,cntRB=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1c",&arr[i][j]);
		}
		getchar();
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check[i][j]==false){
				dfsRGB(i,j,arr[i][j]);
				cntRGB++;
			}
		}
	}
	memset(check,false,sizeof(check));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check[i][j]==false){
				dfsRB(i,j,arr[i][j]);
				cntRB++;
			}
		}
	}
	printf("%d %d\n",cntRGB,cntRB);
}