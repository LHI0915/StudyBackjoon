#include <stdio.h>
#include <vector>

using namespace std;

int main(void){
	int roomNum,action,x,y,cnt=0;
	scanf("%d",&roomNum);
	vector<int> arr(roomNum); 
	scanf("%d",&action);
	for(int i=0;i<action;i++){
		scanf("%d%d",&x,&y);
		for(int j=x;j<y;j++){
			arr[j-1]=1;
		}
	}
	for(int i=0;i<roomNum;i++){
		if(arr[i]==0) cnt++;
	}
	printf("%d\n",cnt);
}