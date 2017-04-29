#include<stdio.h>
int p(int , int);
void power() {
        int x,n,r;
        printf("enter x,n:");
        scanf("%d %d" , &x , &n);
        r = p(x , n);
        printf(" power = %d\n ", r);
}
int p(int x  , int n) {
        if(n == 0) 
                return 1;
        else
                return (x * p(x , n-1));
}
