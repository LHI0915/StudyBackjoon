#include <cstdio>
#include <vector>

using namespace std;

vector<int> a[1001];
int check[1001];

void dfs(int node){
	check[node]=true;
	for(int i=0;i<a[node].size();i++){
		int next=a[node][i];
		if(check[next]==false){
			dfs(next);
		}else{
			return;
		}
	}
}
int main(void){
	int ts,n,cnt=0;
	scanf("%d",&ts);
	while(ts--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			a[i].clear();
			check[i]=0;
		}
		for(int i=1;i<=n;i++){
			int u;
			scanf("%d",&u);
			a[u].push_back(i);
		}
		for(int i=1;i<=n;i++){
			if(check[i]==false){
				dfs(i);
				cnt++;
			}
		}
		printf("%d\n",cnt);
		cnt=0;
	}
}