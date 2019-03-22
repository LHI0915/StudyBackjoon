#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
char arr[26][26];
int cnt=0;
vector<int> savecnt;

void dfs(int i,int j){
	cnt++;
	arr[i][j]='0';
	if(arr[i][j+1]=='1'){
		dfs(i,j+1);
	}
	if(arr[i][j-1]=='1'){
		dfs(i,j-1);
	}
	if(arr[i+1][j]=='1'){
		dfs(i+1,j);
	}
	if(arr[i-1][j]=='1'){
		dfs(i-1,j);
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]!='0'){
				dfs(i,j);
				savecnt.push_back(cnt);
				cnt=0;
			}
		}
	}
	sort(savecnt.begin(),savecnt.end());
	printf("%d\n",savecnt.size());
	for(int i=0;i<savecnt.size();i++){
		printf("%d\n",savecnt[i]);
	}

}