#include <stdio.h>
#include <string.h>

int main(void){
	char arr[5001],check=1;
	char *savearr[3]={"pi","ka","chu"};
	int len;
	scanf("%s",arr);
	len = strlen(arr);
	for(int i=0;i<len;i++){
		if(arr[i]=='p'){
			if(arr[i+1]=='i') i++;
			else {
				check=0;
				break;
			}
		}
		else if(arr[i]=='k'){
			if(arr[i+1]=='a') i++;
			else{
				check=0;
				break;
			}
		}
		else if(arr[i]=='c'){
			if(arr[i+1]=='h' && arr[i+2]=='u') i+=2;
			else{
				check=0;
				break;
			}
		}
		else{
			check=0;
			break;
		}
	}
	if(check==0) printf("NO\n");
	else printf("YES\n");
}