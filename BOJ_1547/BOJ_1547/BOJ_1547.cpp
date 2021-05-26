#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	int testcase,cup1,cup2,check[3]={1,0,0};
	scanf("%d",&testcase);
	for(int i=0;i<testcase;i++){
		scanf("%d%d",&cup1,&cup2);
		swap(check[cup1-1],check[cup2-1]);
	}
	if(check[0]==1) printf("%d\n",1);
	else if(check[1]==1) printf("%d\n",2);
	else if(check[2]==1) printf("%d\n",3);
	else printf("%d\n",-1);
}