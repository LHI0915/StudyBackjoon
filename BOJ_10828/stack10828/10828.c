#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* link;
}ND;

ND *stackTop=NULL;

void push(int data){
	ND *tmp= (ND *)malloc(sizeof(ND));
	tmp->data=data;
	tmp->link=NULL;
	if(stackTop==NULL){
		stackTop=tmp;
	}
	else{
		tmp->link=stackTop;
		stackTop=tmp;
	}
}

void pop(){
	ND *tmp=stackTop;
	if(stackTop==NULL) {
		printf("%d\n",-1);
		return;
	}
	else{
		printf("%d\n",stackTop->data);
		stackTop=stackTop->link;
		tmp=NULL;
	}
}

void size(){
	int count=1;
	ND *tmp=stackTop;
	if(stackTop==NULL){
		printf("%d\n",0);
		return;
	}
	while(tmp->link!=NULL){
		count++;
		tmp=tmp->link;
	}
	printf("%d\n",count);
}

void empty(){
	if(stackTop==NULL){
		printf("%d\n",1);
	}
	else
		printf("%d\n",0);
}

void top(){
	if(stackTop==NULL) printf("%d\n",-1);
	else{
		printf("%d\n",stackTop->data);
	}
}
int main(void){
	int testcase,i,j,n=0;
	char s[10001];
	scanf("%d",&testcase);
	getchar();
	for(i=0;i<testcase;i++){
		gets(s);
		if(strcmp(s,"top")==0) top();
		else if(strcmp(s,"size")==0) size();
		else if(strcmp(s,"pop")==0) pop();
		else if(strcmp(s,"empty")==0) empty();
		else{
			for(j=0;s[j]!='\0';j++){
				if(s[j]>='0' && s[j]<='9'){
					n=10*n+(s[j]-48);
				}
			}
			push(n);
			n=0;
		}
	}
}