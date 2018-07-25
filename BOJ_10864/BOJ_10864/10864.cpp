#include <stdio.h>
#include <iostream>

using namespace std;


int main(void){
	int N,M,A[10001],B[10001],save[10001]={0,};
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++){
		scanf("%d%d",&A[i],&B[i]);
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<M;j++){
			if(A[i]==B[j]) continue;
			else{
				save[A[i]-1]++;
				break;
			}
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(A[i]==B[j]) continue;
			else{
				save[B[i]-1]++;
				break;
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%d\n",save[i]);
	}
}