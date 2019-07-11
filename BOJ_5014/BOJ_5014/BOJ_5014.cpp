#include <stdio.h>
#include <queue>

using namespace std;
bool check[1000001];
queue<pair<int,int>> q;
int bfs(int allF,int curS,int stlinkG, int upU, int downD,int cnt){
	check[curS]=true;
	q.push(make_pair(curS,cnt));
	while(!q.empty()){
		int cx = q.front().first;
		int cxcnt=q.front().second;
		if(cx==stlinkG){
			return cxcnt;
		}
		q.pop();
		if(cx+upU<=allF && check[cx+upU]==false){
			q.push(make_pair(cx+upU,cxcnt+1));
			check[cx+upU]=true;
		}
		if(cx-downD>=1 && check[cx-downD]==false){
			q.push(make_pair(cx-downD,cxcnt+1));
			check[cx-downD]=true;
		}
	}
	return -1;
}
int main(void){
	int allF,stlinkG,curS,upU,downD,cnt=0;
	scanf("%d%d%d%d%d",&allF,&curS,&stlinkG,&upU,&downD);
	cnt=bfs(allF,curS,stlinkG,upU,downD,0);
	if(cnt==-1) printf("use the stairs\n");
	else printf("%d\n",cnt);
}