#include <stdio.h>
#include <algorithm>

using namespace std;

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else
		gcd(b,a%b);
}
int main(void){
	int testcase,arr[101],i=0,a=1,maxnum=0;
	scanf("%d",&testcase);
	while(testcase--){
		while(~scanf("%d",&a)){
			arr[i++]=a;
			if(getchar()=='\n') 
				break;
		}
		for(int j=0;j<i;j++){
			for(int k=j+1;k<i;k++){
				maxnum=max(maxnum,gcd(arr[j],arr[k]));
			}
		}
		printf("%d\n",maxnum);
		i=0;
		maxnum=0;
	}
}