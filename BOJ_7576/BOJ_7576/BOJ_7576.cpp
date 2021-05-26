#include <cstdio>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;
int m,n;
int map[1001][1001];
int vis[1001][1001];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
queue<pair<int,int>> q;

void bfs(int count){
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
			if(vis[nx][ny]!= -1 && vis[nx][ny]!=1){
				if(vis[nx][ny]==0 || (vis[nx][ny]> 0 && vis[nx][ny] > vis[x][y]+1)){
					q.push(make_pair(nx,ny));
					vis[nx][ny]=vis[x][y]+1;
				}
			}
		}

	}
}
int main(void){
	int check=1,one_cnt=0,maxnum=0,count=1;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&vis[i][j]);
			if(vis[i][j]==1){
				one_cnt++;
				q.push(make_pair(i,j));
			}
		}
	}
	if(one_cnt!=m*n){
		bfs(count);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(vis[i][j]==0){
					maxnum=0;
					check=0;
					break;
				}else{
					maxnum=max(maxnum,vis[i][j]);
				}
			}
			if(check==0) break;
		}
		printf("%d\n",maxnum-1);
	}else if(one_cnt==m*n){
		printf("%d\n",0);
	}
	


}