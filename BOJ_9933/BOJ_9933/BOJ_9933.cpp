#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void){
	int n,check=0;
	string arr[101];
	string saveArr;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		string temp = arr[i];
		reverse(arr[i].begin(),arr[i].end());
		if(temp.compare(arr[i])==0){
			saveArr=arr[i];
			break;
		}else reverse(arr[i].begin(),arr[i].end());
		for(int j=i+1;j<n;j++){
			if(arr[i].length()==arr[j].length()){
				reverse(arr[j].begin(),arr[j].end());
				if((arr[i].compare(arr[j]))==0){
					check=1;
					saveArr= arr[i];
					break;
				}else reverse(arr[j].begin(),arr[j].end());
			}
		}
		if(check==1) break;
	}
	
	printf("%d %c\n",saveArr.length(),saveArr[saveArr.length()/2]);
	
	
}