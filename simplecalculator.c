#include<stdio.h>
int main()
{
int a,b,result;
char operator;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
printf("Enter an arithmetic operator:");
operator=getchar();
scanf("%c",&operator);
switch(operator)
{
case'+':
result=a+b;
printf("Addition=%d\n",result);
break;
case'-':
result=a-b;
printf("Subtraction=%d\n",result);
break;
case'*':
result=a*b;
printf("Multiplication=%d\n",result);
break;
case'/':
result=a/b;
printf("Division=%d\n",result);
break;
case'%':
result=a%b;
printf("Modulus=%d\n",result);
break;
default:
printf("Invalid input");
}
}



