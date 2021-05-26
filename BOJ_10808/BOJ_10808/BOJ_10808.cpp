#include <iostream>
#include <string>

using namespace std;

int main(void){
	string s;
	int cntArr[26]={0,};
	cin >> s;
	for(int i=0;i<s.size();i++){
		int test=s[i]-'a';
		cntArr[(int)test]++;
	}
	for(int i=0;i<26;i++){
		printf("%d ",cntArr[i]);
	}
	printf("\n");
}