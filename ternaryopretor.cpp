#include<stdio.h>
int main(){
	
	int num1,num2,num3;
printf("Enter your value\n");
scanf("%d",&num1);

printf("Enter your value\n");
scanf("%d",&num2);

printf("Enter your value\n");
scanf("%d",&num3);	
(num1<num2 && num1<num3)?printf("your minemum value is%d",num1)
:(num2<num1 && num2<num3)?printf("your minemum value is%d",num2)
:printf("your minemum value is%d\n",num3);
}