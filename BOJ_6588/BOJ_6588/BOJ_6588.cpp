#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAX = 1000000;

int main(void){
	int p[1000001],num,pn=0,flag=1;
	bool check[1000001]={false,};
	for(int i=2;i<=MAX;i++){
			if(check[i]==false){
				p[pn++]=i;
				for(int j=i+i;j<=MAX;j+=i){
					check[j]=true;
				}
			}
		}
	while(1){
		scanf("%d",&num);
		if(num==0) break;
		
		for(int i=1;i<pn;i++){
			if(check[num-p[i]]==false){
				cout << num << " = " << p[i] << " + " << num-p[i] << '\n';
				flag=0;
				break;
			}
		}
		if(flag)
			printf("Goldbach's conjecture is wrong.\n");
		
	}
}