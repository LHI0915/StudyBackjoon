#include <stdio.h>
#include <queue>

using namespace std;

int n;
int arr[51][51];
int check[51][51];
int vis[51][51];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> q;
void bfs(int x, int y){
	int flag = 0;
	check[x][y]=1;
	q.push(make_pair(x,y));
	while(!q.empty()){
		int cx = q.front().first;
		int cy = q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx = cx+dx[i];
			int ny = cy+dy[i];
			if(nx<0 || nx>=n || ny<0 || ny>=n) continue;
			if(arr[nx][ny]==1){
				if(check[nx][ny]==0 || ( check[nx][ny]!=0 && check[cx][cy] < check[nx][ny])){
					q.push(make_pair(nx,ny));
					check[nx][ny] = check[cx][cy];
				}
			}
			else if(arr[nx][ny]==0){
				if(check[nx][ny]==0 || (check[nx][ny]!=0 && check[cx][cy]+1<check[nx][ny])){
					q.push(make_pair(nx,ny));
					check[nx][ny] = check[cx][cy]+1;
				}
			}
		}
	}
	
}
int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	
	bfs(0,0);
	printf("%d\n",check[n-1][n-1]-1);
	
}