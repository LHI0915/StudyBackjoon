#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
	int numArr[4];
	string arr;
	cin >> numArr[0] >> numArr[1] >> numArr[2] >> arr;
	sort(numArr,numArr+3);
	for(int i=0;i<3;i++){
		if(arr[i]=='A') cout << numArr[0] << ' ';
		else if(arr[i]=='B') cout << numArr[1] << ' ';
		else cout << numArr[2] << ' ';
	}

}