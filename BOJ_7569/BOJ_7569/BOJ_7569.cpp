#include <stdio.h>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;
int height,width,ver;
int arr[101][101][101];
int dx[6] = {-1,0,1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dh[6] = {0,0,0,0,1,-1};
queue<pair<int,pair<int,int>>> q;
void bfs(){
	while(!q.empty()){
		int h = q.front().first;
		int x = q.front().second.first;
		int y = q.front().second.second;
		q.pop();
		for(int i=0;i<6;i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			int nh = h+dh[i];
			if(nx<0 || nx>=height || ny<0 || ny>=width || nh<0 || nh>=ver) continue;
			if(arr[nh][nx][ny]!= -1 && arr[nh][nx][ny]!=1 ){
				if(arr[nh][nx][ny]==0 || (arr[nh][nx][ny]>0 && arr[nh][nx][ny]>arr[h][x][y]+1)){
					q.push(make_pair(nh,make_pair(nx,ny)));
					arr[nh][nx][ny] = arr[h][x][y]+1;
				}
			}
		}
	}
}
int main(void){
	int result=0,onecnt=0;
	scanf("%d%d%d",&width,&height,&ver);
	memset(arr,-2,sizeof(arr));
	for(int i=0 ;i<ver;i++){
		for(int j=0;j<height;j++){
			for(int k=0;k<width;k++){
				scanf("%d",&arr[i][j][k]);
				if(arr[i][j][k]==1){
					q.push(make_pair(i,make_pair(j,k)));
				}
			}
		}
	}
	
	bfs();
	for(int i=0;i<ver;i++){
		for(int j=0;j<height;j++){
			for(int k=0;k<width;k++){
				if(arr[i][j][k]==0){
					result=-1;
					printf("%d\n",result);
					return 0;
				}else{
					result = max(result,arr[i][j][k]);
				}
			}
		}
	}
	
	printf("%d\n",result-1);
}