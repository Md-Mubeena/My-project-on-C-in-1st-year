#include <stdio.h>
int ncr (int n, int r)
{
if (r == 0 || r == n)
return 1;

else if(r > n)
return -1;

else
return ncr(n-1,r)+ncr(n-1, r-1);

}
void ncr_recursion() {
int n;
int r;

printf("Enter n, r =  ");
scanf("%d%d",&n,&r);
printf("ncr = %d\n",ncr(n,r));
}
