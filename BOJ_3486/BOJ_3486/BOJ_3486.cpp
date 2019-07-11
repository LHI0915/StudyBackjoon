#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int ts,areverse,breverse;
	long long int sum;
	string a,b,sumS;
	scanf("%d",&ts);
	while(ts--){
		cin >> a >> b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		areverse = stoi(a);
		breverse = stoi(b);
		sum = areverse+breverse;
		sumS = to_string(sum);
		reverse(sumS.begin(),sumS.end());
		sum = stoi(sumS);
		cout << sum << '\n';
	}
}