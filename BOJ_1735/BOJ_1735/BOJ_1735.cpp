#include <stdio.h>

int gcd(int a, int b){ //�ִ� ������� ����
	if(b==0){
		return a;
	}else{
		gcd(b,a%b);
	}
}
int main(void){
	int a,b,c,d,gcdNum,lcmNum,finalUp;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	gcdNum=gcd(b,d); //�и��� �ִ� �����
	lcmNum=(b*d)/gcdNum; //�и��� �ּ� �����(���)
	a=a*(lcmNum/b); //��� ���� ���� ����
	c=c*(lcmNum/d); //��� ���� ���� ����
	finalUp=a+c; //������ ��
	gcdNum=gcd(finalUp,lcmNum); //�и�� ������ �ִ�����
	printf("%d %d\n",finalUp/gcdNum,lcmNum/gcdNum);
	
}