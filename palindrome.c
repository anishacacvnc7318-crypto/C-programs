#include<stdio.h>
int main()
{
int x,original,reverse=0;
printf("Enter an integer:");
scanf("%d",&x);
if(x<0)
{
printf("False");
}
original=x;
for(int i=x;i!=0;i=i/10)
{
int digit=i%10;
reverse=reverse*10+digit;
}
if(original==reverse)
printf("True");
else
printf("False");
}
