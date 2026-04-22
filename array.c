#include<stdio.h>
int main()
{
int n,found=0;
printf("Enter size of array:");
scanf("%d",&n);
int nums[n];
printf("Enter array elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&nums[i]);
}
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(nums[i]==nums[j])
{
found=1;
break;
}
}
if(found)
  break;
}
  if(found)
    printf("True");
  else
    printf("False");
}
