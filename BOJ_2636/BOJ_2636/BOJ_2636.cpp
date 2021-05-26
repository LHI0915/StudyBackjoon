#include <stdio.h>
#include <queue>

using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int arr[101][101];
int vis[101][101];
int height,width;
queue<pair<int,int>> removeq;
void dfs(int x,int y){
	vis[x][y]=-1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx<0 || nx>=height || ny<0 || ny>=width) continue;
		if(arr[nx][ny]==0 && vis[nx][ny]==0)
			dfs(nx,ny);
	}
}

void edge(int x, int y){
	for(int i=0;i<4;i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(nx<0 || nx>=height || ny<0 || ny>=width) continue;
		if(vis[nx][ny]==-1){
			removeq.push(make_pair(x,y));
			return;
		}
	}
}
int main(void){
	int cnt=0,check=0,cheeze_cnt=0,save_qsize;
	scanf("%d%d",&height,&width);
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	while(1){
		memset(vis,0,sizeof(vis));
		dfs(0,0);
		for(int i=0;i<height;i++){
			for(int j=0;j<width;j++){
				if(arr[i][j]==1){
					edge(i,j);
				}
			}
		}
		int qsize = removeq.size();
		while(!removeq.empty()){
			vis[removeq.front().first][removeq.front().second] = -1;
			arr[removeq.front().first][removeq.front().second]=0;
			removeq.pop();
			check=1;
		}
		if(check) {
			cnt++;
			save_qsize = qsize;
		}
		else if(check==0) break;
		check=0;
	}
	printf("%d\n%d\n",cnt,save_qsize);
	
}