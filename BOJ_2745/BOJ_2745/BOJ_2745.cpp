#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void){
	string s;
	long long int ans=0;
	int B;
	cin >> s >> B;
	for(int i=0;i<s.size();i++){
		if('0'<=s[i] && s[i]<='9'){
			ans=ans*B+(s[i]-'0');
		}
		else{
			ans=ans*B+(s[i]-'A'+10);
		}
	}
	printf("%lld\n",ans);
}