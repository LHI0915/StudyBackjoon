#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(void){
	int ts;
	string num;
	scanf("%d",&ts);
	while(ts--){
		cin >> num;
		if(num[num.size()-1]%2==0) printf("even\n");
		else printf("odd\n");
	}
}