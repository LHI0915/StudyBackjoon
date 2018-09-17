#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int testcase;
	vector<pair<int,int>> a;
	scanf("%d",&testcase);
	a.resize(testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&a[i].first,&a[i].second);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<testcase;i++){
		printf("%d %d\n",a[i].first,a[i].second);
	}
}