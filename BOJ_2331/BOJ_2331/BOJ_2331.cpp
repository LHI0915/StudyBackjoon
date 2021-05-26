#include <cstdio>
#include <math.h>

using namespace std;

int main(void){
	int firstnum,p,sum=0,savenum,ans=0;
	int check[300001];
	scanf("%d%d",&firstnum,&p);
	savenum=firstnum;
	while(1){
		check[savenum]++;
		if(check[savenum]==1) ans++; //마지막에+1해줘야함
		else if(check[savenum]==2) ans--;
		else if(check[savenum]==3) break;
		while(firstnum!=0){
			sum=sum+pow((double)(firstnum%10),(double)p);
			firstnum=firstnum/10;
		}
		firstnum=sum;
		savenum=sum;
		sum=0;
	}
	printf("%d\n",ans);
}