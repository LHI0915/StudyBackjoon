#include <cstdio>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node){
	check[node]=true;
	for(int i=0;i<a[node].size();i++){
		int next=a[node][i];
		if(check[next]==false){
			dfs(next);
		}
	}
}

int main(void){
	int n,m,cnt=0,firstnum;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		int u,v;
		scanf("%d%d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(check[i]==false){
			dfs(i);
			cnt++;
		}
	}
	printf("%d\n",cnt);
}