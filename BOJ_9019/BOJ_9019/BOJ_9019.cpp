#include <stdio.h>
#include <queue>
#include <string>
#include <iostream>
#include <string.h>


using namespace std;

void nextD(int cnum,string cstate);
void nextS(int cnum,string cstate);
void nextL(int cnum, string cstate);
void nextR(int cnum,string cstate);

queue<pair<int,string>> q;
bool check[10001];

string bfs(int firstNum, int secondNum){
	int k;
	check[firstNum]=true;
	q.push(make_pair(firstNum,""));
	while(!q.empty()){
		int cnum = q.front().first;
		string cstate = q.front().second;
		if(cnum==secondNum){
			return cstate;
		}
		q.pop();
		nextD(cnum,cstate);
		nextS(cnum,cstate);
		nextL(cnum,cstate);
		nextR(cnum,cstate);
		
	}
}

void nextD(int cnum,string cstate){
	if(cnum*2>9999 && check[(cnum*2)%10000]==false){
		q.push(make_pair((cnum*2)%10000,cstate+"D"));
		check[(cnum*2)%10000]=true;
	}else if(cnum*2<=9999 && check[cnum*2]==false){
		q.push(make_pair(cnum*2,cstate+"D"));
		check[cnum*2]=true;
	}
}
void nextS(int cnum,string cstate){
	if(cnum==0 && check[9999]==false){
		q.push(make_pair(9999,cstate+"S"));
		check[9999]=true;
	}else if(check[cnum-1]==false){
		q.push(make_pair(cnum-1,cstate+"S"));
		check[cnum-1]=true;
	}
}
void nextL(int cnum, string cstate){
	int k,a,b,c,d;
	k=cnum/1000;
	a=k;
	k=(cnum/100)%10;
	b=k*1000;
	k=(cnum/10)%10;
	c=k*100;
	k=cnum%10;
	d=k*10;
	k=b+c+d+a;
	if(check[k]==false){
		q.push(make_pair(k,cstate+"L"));
		check[k]=true;
	}
	
}

void nextR(int cnum,string cstate){
	int k,a,b,c,d;
	k=cnum/1000;
	a=k*100;
	k=(cnum/100)%10;
	b=k*10;
	k=(cnum/10)%10;
	c=k;
	k=cnum%10;
	d=k*1000;
	k=d+a+b+c;
	if(check[k]==false){
		q.push(make_pair(k,cstate+"R"));
		check[k]=true;
	}
}
int main(void){
	int ts,firstNum,secondNum;
	scanf("%d",&ts);
	while(ts--){
		scanf("%d%d",&firstNum,&secondNum);
		cout << bfs(firstNum,secondNum) << '\n';
		while(!q.empty()) q.pop();
		memset(check,false,sizeof(check));
	}
}