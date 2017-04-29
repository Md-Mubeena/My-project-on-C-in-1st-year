#include<stdio.h>
int fact(int n);
void fact_recursion()  {
int n,x;
printf("Enter n value=");
scanf("%d",&n);
x = fact(n);
printf("\n Factorial = %d\n", x);
}

int fact (int n)
{
if(n == 1)
return 1;
else
return n*fact(n-1);
}

