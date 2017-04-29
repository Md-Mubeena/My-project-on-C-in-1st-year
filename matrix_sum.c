#include<stdio.h>
void matrix_sum() {
int a[2][2];
int b[2][2];
int c[2][2];
int i,j;
printf("\n enter the elements into 1st matrix");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&a[i][j]);
printf("\n enter the elements into 2nd matrix");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<2;i++)
for(j=0;j<2;j++)
c[i][j]=a[i][j]+b[i][j];
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("\t%d",c[i][j]);
printf("\n");
}
}
