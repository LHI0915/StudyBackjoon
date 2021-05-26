#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int n,m,alpha[26]={0,},dna=0,maxIndex=0,saveAlpha;
	char arr[51];
	vector<string> a;
	vector<char> b;
	scanf("%d%d",&n,&m);
	a.reserve(n);
	b.reserve(m);
	for(int i=0;i<n;i++){
		scanf("%s",arr);
		a.push_back(arr);
	}
	//printf("%d",'T'-'A');
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			alpha[a[j][i]-'A']++;
		}
		saveAlpha=alpha[0];
		for(int j=0;j<26;j++){
			if(alpha[j]>saveAlpha){
				saveAlpha=alpha[j];
				maxIndex=j;
			}
		}
		b.push_back(maxIndex+'A');
		for(int j=0;j<26;j++) alpha[j]=0;
		maxIndex=0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]!=b[i]) dna++;
		}
	}
	for(int i=0;i<m;i++){
		printf("%c",b[i]);
	}
	printf("\n%d\n",dna);

	
}