#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

long long int two(long long int n){
	long long int ans=0,i;
	for(i=2;i<=n;i*=2){
		ans=ans+n/i;
	}
	return ans;
}

long long int five(long long int n){
	long long int ans=0,i;
	for(i=5;i<=n;i*=5){
		ans=ans+n/i;
	}
	return ans;
}

int main(void){
	long long int n,m,ans2=0,ans5=0;
	scanf("%lld%lld",&n,&m);
	ans2=ans2+two(n);
	ans2=ans2-two(m);
	ans2=ans2-two(n-m);
	ans5=ans5+five(n);
	ans5=ans5-five(m);
	ans5=ans5-five(n-m);
	printf("%lld\n",min(ans2,ans5));
}