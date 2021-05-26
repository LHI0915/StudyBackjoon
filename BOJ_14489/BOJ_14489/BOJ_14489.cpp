#include <iostream>

using namespace std;
int main(void){
	long long int a,b,c;
	cin >> a >> b >> c;
	if(a+b>=c*2) cout << a+b-c*2 << "\n";
	else{
		cout << a+b << "\n";
	}
}