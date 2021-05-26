#include <stdio.h>

int main(void){
	int n,k,cnt=0;
	bool check[1001]={false,};
	scanf("%d%d",&n,&k);
	for(int i=2;i<=n;i++){
		if(check[i]==false){
			cnt++;
			if(cnt==k) {
				printf("%d\n",i);
				return 0;
			}
			for(int j=i*i;j<=n;j+=i){
				if(check[j]!=true) cnt++;
				check[j]=true;
				if(cnt==k) {
					printf("%d\n",j);
					return 0;
				}
			}
			
		}
	}
}