#include<stdio.h>
int main()
{
int A[10][10],B[10][10],C[10][10];
int rows,colu,i,j;
printf("enter number of rows and columns:\n");
scanf("%d%d",&rows,&colu);
printf("enter the elements of matrix A:\n");
for(i=0;i<rows;i++){
for(j=0;j<colu;j++){
scanf("%d",&A[i][j]);
}
}
printf("enter the elements of matrix B:\n");
for(i=0;i<rows;i++){
for(j=0;j<colu;j++){
scanf("%d",&B[i][j]);
}
}
for(i=0;i<rows;i++){
for(j=0;j<colu;j++){
C[i][j]=A[i][j]+B[i][j];
}
}
printf("\nresultant matrix(A+B):\n");
for(i=0;i<rows;i++){
for(j=0;j<colu;j++){
printf("%d\t",C[i][j]);
}
printf("\n");
}
return 0;
}

