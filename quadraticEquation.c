#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void QuadraticEquation(){
	int n=10;
	char numberA[n],numberB[n],numberC[n];
	double delta;
	int check=0;int i;int count=0;
	printf("===== Quadratic Equation =====\n");
	//number A
	while(check==0){
	printf("Enter a: ");
	scanf("%s",numberA);
	int lenA=strlen(numberA);
	for(i=0;i<lenA;i++){
		if(numberA[i]>='0'&&numberA[i]<='9'
		||numberA[i]=='-'&&i==0&&numberA[i+1]>='0'&&numberA[i+1]<='9'
		||numberA[i]=='.'&&numberA[i-1]>='0'&&numberA[i-1]<='9'&&numberA[i+1]>='0'&&numberA[i+1]<='9'){
			count++;
		}
	}
	n=lenA;
	if(numberA[n]==1){
		check=0;
	}
	if(count==lenA){
		check=1;
	}
	else{
		count=0;
		printf("Must be number\n");
	}
	}
	double A=atof(numberA);
	if(A==0){
		printf("Number A in quadratic equation cannot be 0\n");
		QuadraticEquation();
		return 0;
	}
	check=0;
	count=0;
	//number B
	while(check==0){
	printf("Enter b: ");
	scanf("%s",numberB);
	int lenB=strlen(numberB);
	int count=0;
	for(i=0;i<lenB;i++){
		if(numberB[i]>='0'&&numberB[i]<='9'
		||numberB[i]=='-'&&i==0&&numberB[i+1]>='0'&&numberB[i+1]<='9'
		||numberB[i]=='.'&&numberB[i-1]>='0'&&numberB[i-1]<='9'&&numberB[i+1]>='0'&&numberB[i+1]<='9'){
			count++;
		}
	}
	if(count==lenB){
		check=1;
	}
	else{
		count=0;
		printf("Must be number\n");
	}
	}
	double B=atof(numberB);
	check=0;
	count=0;
	//number C
	while(check==0){
	printf("Enter c: ");
	scanf("%s",numberC);
	int lenC=strlen(numberC);
	int count=0;
	for(i=0;i<lenC;i++){
		if(numberC[i]>='0'&&numberC[i]<='9'
		||numberC[i]=='-'&&i==0&&numberC[i+1]>='0'&&numberC[i+1]<='9'
		||numberC[i]=='.'&&numberC[i-1]>='0'&&numberC[i-1]<='9'&&numberC[i+1]>='0'&&numberC[i+1]<='9'){
			count++;
		}
	}
	if(count==lenC){
		check=1;
	}
	else{
		count=0;
		printf("Must be number\n");
	}
	}
	double C=atof(numberC);
	//printf("%lf\n",A);
	//printf("%lf\n",B);
	//printf("%lf\n",C);
	delta= (B*B) - (4*A*C);
	printf("delta = %.2lf\n",delta);
	double x1,x2;
	if(delta<0){
		printf("No solution\n");
	}
	else if(delta>0){
		x1=(-B+sqrt(delta))/(2*A);
		x2=(-B-sqrt(delta))/(2*A);
		printf("Solution x1 = %.2lf	x2 = %.2lf\n",x1,x2);
	}
	else{
		x1=-B/(2*A);
		printf("Solution x1 = x2 = %.2lf\n",x1);
	}
}

void main(){
	char answer[10];
	int check = 0;

	do {
    	QuadraticEquation();
    	printf("Do you want to continue? (Y/N): ");
    	scanf("%s", answer);
	} while (strcmp(answer, "Y") == 0 || strcmp(answer, "y") == 0);

}
