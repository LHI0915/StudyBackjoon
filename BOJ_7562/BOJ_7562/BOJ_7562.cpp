#include <stdio.h>
#include <queue>
#include <string.h>

using namespace std;

int dx[8]={-2,-1,1,2,2,1,-1,-2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int n,vis[301][301];
queue<pair<int,pair<int,int>>> q;

int bfs(int x1, int y1, int last_x, int last_y){
	vis[x1][y1]=1;
	q.push(make_pair(x1,make_pair(y1,0)));
	while(!q.empty()){
		int cx = q.front().first;
		int cy = q.front().second.first;
		int cnt=q.front().second.second;
		q.pop();
		if(cx==last_x && cy==last_y){
			return cnt;
		}
		for(int i=0;i<8;i++){
			int nx = cx + dx[i];
			int ny = cy + dy[i]; 
			if(nx <0 || nx>=n || ny<0 || ny>=n) continue;
			if(vis[nx][ny]==0){
				q.push(make_pair(nx,make_pair(ny,cnt+1)));
				vis[nx][ny]=1;
			}
		}
	}
	
}
int main(void){
	int ts,x1,y1,x2,y2,cnt;
	scanf("%d",&ts);
	while(ts--){
		memset(vis,0,sizeof(vis));
		while(!q.empty()){
			q.pop();
		}
		scanf("%d",&n);
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		cnt=bfs(x1,y1,x2,y2);
		printf("%d\n",cnt);
	}
}