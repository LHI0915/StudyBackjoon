#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
	int testcase;
	vector<pair<int,int> > a;
	scanf("%d",&testcase);
	a.resize(testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&a[i].second,&a[i].first);
	}
	sort(a.begin(),a.end());
	for(int i=0;i<testcase;i++){
		printf("%d %d\n",a[i].second,a[i].first);
	}
}