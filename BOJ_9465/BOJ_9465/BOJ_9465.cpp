#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void){
	int testcase,n;
	int d[2][100001];
	scanf("%d",&testcase);
	while(testcase--){
		scanf("%d",&n);
		for(int i=0;i<2;i++){
			for(int j=1;j<=n;j++){
				scanf("%d",&d[i][j]);
			}
		}
		for(int i=2;i<=n;i++){
			d[0][i] = max(d[1][i-1]+d[0][i],d[0][i-1]);
			d[1][i] = max(d[0][i-1]+d[1][i],d[1][i-1]);
		}
		printf("%d\n",max(d[0][n],d[1][n]));
	}
}