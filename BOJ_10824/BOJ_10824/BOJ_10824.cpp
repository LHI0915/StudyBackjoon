#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	string a,b,c,d;
	string ab,cd;
	long long int n1=0,n2=0;
	cin >> a >> b >> c >> d;
	ab=a+b;
	cd=c+d;
	for(int i=0;i<ab.size();i++){
		n1=10*n1+(ab[i]-'0');
	}
	for(int i=0;i<cd.size();i++){
		n2=10*n2+(cd[i]-'0');
	}
	printf("%lld\n",n1+n2);
}