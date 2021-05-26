#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int B,n;
	string ans="";
	cin >> n >> B;
	while(n!=0){
		int r = n%B;
		if(r<10)
			ans += (char)(r+'0');
		else
			ans+=(char)(r-10+'A');
		n/=B;
	}
	reverse(ans.begin(),ans.end());
	cout << ans << endl;
	
	
}