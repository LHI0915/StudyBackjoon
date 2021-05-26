#include <stdio.h>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;
vector<int> a[10001];
bool check[10001];

void dfs(int node){
	check[node]=true;
	printf("%d ",node);
	for(int i=0;i<a[node].size();i++){
		int x=a[node][i];
		if(check[x]==false) 
			dfs(x);
	}
}

void bfs(int node){
	queue<int> q;
	memset(check,false,sizeof(check));
	check[node]=true;
	q.push(node);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		printf("%d ",x);
		for(int i=0;i<a[x].size();i++){
			int next=a[x][i];
			if(check[next]==false){
				check[next]=true;
				q.push(next);
			}
		}
	}
}

int main(void){
	int n,m,v;
	scanf("%d%d%d",&n,&m,&v);
	for(int i=0;i<m;i++){
		int u,w;
		scanf("%d%d",&u,&w);
		a[u].push_back(w);
		a[w].push_back(u);
	}
	for(int i=1;i<=n;i++){
		sort(a[i].begin(),a[i].end());
	}
	dfs(v);
	printf("\n");
	bfs(v);
	printf("\n");
	
}