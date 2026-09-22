#include<stdio.h>
int main()
{
int intArr[2];
float floatArr[2];
char charArr[2];
int i;
//input integer arrray
printf("enter 2 integer elements");
for(i=0;i<2;i++)
{
scanf("%d",&intArr[i]);
}
//input float array
printf("enter 2 float elements");
for(i=0;i<2;i++)
{
scanf("%f",&floatArr[i]);
}
//input character array
printf("enter 2 characters");
for(i=0;i<5;i++)
{
scanf("%c",&charArr[i]);
}
//display integer array values and addresses
printf("\ninteger array\n");
for(i=0;i<2;i++)
{
printf("value=%d\taddress=%p\n",intArr[i],(void*)&intArr[i]);
}
//display float array values array and addresses
printf("\nfloat array\n");
for(i=0;i<2;i++)
{
printf("values=%.2f\taddress=%p\n",floatArr[i],(void*)&floatArr[i]);
}
//display charactr array values and addresses
printf("\ncharacter array\n");
for(i=0;i<2;i++)
{
printf("values=%c\taddress=%p\n",charArr[i],(void*)&charArr[i]);
}
return 0;
}

