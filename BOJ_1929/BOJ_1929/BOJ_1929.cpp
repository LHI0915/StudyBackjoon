#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;
int main(void){
	int n1,n2,pn=0;
	int p[1000001];
	bool c[1000001];
	scanf("%d%d",&n1,&n2);
	memset(c,false,1000001*sizeof(bool));
	c[0]=c[1]=true;
	for(int i=2;i<=n2;i++){
		if(c[i]==false){
			for(int j=i*2;j<=n2;j+=i){
				c[j]=true;
			}
		}
	}
	for(int i=n1;i<=n2;i++){
		if(c[i]==false) printf("%d\n",i);
	}
}