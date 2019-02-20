#include <stdio.h>
#include <vector>

using namespace std;

vector<int> a[20001];
int check[20001]; //1일때 빨강, 2일때 파랑, 0일때 접근x

void dfs(int node, int c){
	check[node]=c;
	for(int i=0;i<a[node].size();i++){
		int next=a[node][i];
		if(check[next]==0){
			dfs(next,3-c);
		}
	}
}
int main(void){
	int k;
	scanf("%d",&k);
	while(k--){
		int n,m;
		scanf("%d%d",&n,&m);
		for(int i=1; i<=n; i++){
            a[i].clear();
            check[i]=0;
        }
		for(int i=0;i<m;i++){
			int u,v;
			scanf("%d%d",&u,&v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				dfs(i,1);
			}
		}
		bool ans=true;
		for(int i=1;i<=n;i++){
			for(int j=0;j<a[i].size();j++){
				int k=a[i][j];
				if(check[i]==check[k]){
					ans=false;
				}
			}
		}
		if(ans==false) printf("NO\n");
		else printf("YES\n");
	}
}