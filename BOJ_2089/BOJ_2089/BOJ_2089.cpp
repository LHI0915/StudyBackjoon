#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main(void){
	long long int n,r;
	string s;
	scanf("%lld",&n);
	if(n==0) s='0';
	while(n!=0){
		if(n>0) r = n % 2;
		else if(n<0){
			if(n%2==-1)
				r = n-(((n/2)+(-1))*2);
			else if(n%2==0)
				r = n % 2;
		}
		s+=(r+'0');
		n>0 ? n=n/-2: n=(n-1)/-2;
	}
	reverse(s.begin(),s.end());
	cout << s << endl;
}