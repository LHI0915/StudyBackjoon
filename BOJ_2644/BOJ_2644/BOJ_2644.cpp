#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
vector<int> vec[101];
bool check[101];
int bfs(int first,int second,int cnt){
	check[first]=true;
	q.push(make_pair(first,cnt));
	while(!q.empty()){
		int cx = q.front().first;
		int cxcnt = q.front().second;
		q.pop();
		if(cx==second){
			return cxcnt;
		}
		for(int i=0;i<vec[cx].size();i++){
			int nx = vec[cx][i];
			if(check[nx]==false){
				check[nx]=true;
				q.push(make_pair(nx,cxcnt+1));
			}
		}
	}
	return -1;
}
int main(void){
	int result;
	int n,first,second,node;
	scanf("%d%d%d%d",&n,&first,&second,&node);
	for(int i=0;i<node;i++){
		int v,w;
		scanf("%d%d",&v,&w);
		vec[v].push_back(w);
		vec[w].push_back(v);
	}
	printf("%d\n",bfs(first,second,0));
	

}