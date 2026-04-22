#include<stdio.h>
int main()
{
  char s[100];
printf("Enter a string:");
scanf("%s",s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]>='A' && s[i]<='Z')
{
s[i]=s[i]+32;
}
}
printf("Result:%s",s);
}
