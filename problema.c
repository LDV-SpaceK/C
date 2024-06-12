#include <stdio.h>

void main(){
	char input[100];
	scanf("%s",&input);
	if((input[strlen(input) - 1] - '0') % 2 == 0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
