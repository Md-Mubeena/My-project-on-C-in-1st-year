#include<stdio.h>
void sum_pointers()   {
	int i;
	int j;
	int *x;
	int *y;
	x = &i;
	y = &j;
	printf("enter i, j values:");
	scanf("%d%d",&i,&j);
	int sum ;
	sum = *x + *y;
	printf("the sum of given numbers is:%d\n",sum);
}
