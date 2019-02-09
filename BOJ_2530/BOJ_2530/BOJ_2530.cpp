#include <stdio.h>

int main(void){
	int a,b,c,userc;
	scanf("%d%d%d%d",&a,&b,&c,&userc);
	for(int i=0;i<userc;i++){
		c+=1;
		if(c==60){
			c=0;
			b+=1;
			if(b==60){
				b=0;
				a+=1;
				if(a==24){
					a=0;
				}
			}
		}
	}
	printf("%d %d %d\n",a,b,c);
}