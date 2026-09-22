#include<stdio.h>
int main()
{
int arr[100],n,i,sum=0;
printf("enter the no of elements:");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("sum of the array elements = %d\n",sum);
return 0;
}

