#include <cstdio>
#include <queue>

using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int vis[101][101];
int n,m;

void bfs(int x, int y){
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		x=q.front().first;
		y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx<0 || nx>n-1 || ny<0 || ny>m-1) continue;
			if(vis[nx][ny]==1){
				q.push(make_pair(nx,ny));
				vis[nx][ny]=vis[x][y]+1;
			}
		}
	}
}
int main(void){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&vis[i][j]);
		}
	}
	vis[0][0]=2;
	bfs(0,0);
	printf("%d\n",vis[n-1][m-1]-1);
}