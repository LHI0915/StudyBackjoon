#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main(void){
	int n,m,count=1;
	queue<int> qu;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		qu.push(i);
	}
	printf("<");
	while(!qu.empty()){
		if(count==m){
			printf("%d",qu.front());
			if(qu.size()!=1) printf(", ");
			qu.pop();
			count=1;
		}
		else{
			qu.push(qu.front());
			qu.pop();
			count++;
		}
		
	}
	printf(">\n");
}