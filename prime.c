#include<stdio.h>
void prime() {
        int x;
        printf("Enter the number:");
        scanf("%d" , &x);

        if(x == 2 || x == 3 || x == 5 || x == 7)
                printf("Number is a prime\n");
        else if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0 )
                printf("Number is not a prime\n");
        else
                printf("Number is a prime\n");
}

