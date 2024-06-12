#include <stdio.h>

void main(){
	char input[1001];
	int i;int sum=0;int number;
	scanf("%s",&input);
	for(i=0;i<strlen(input);i++){
		number = input[i] - '0';
		sum+=number;
	}
	printf("%d",sum);
}
