#include<stdio.h>
int reve(int);
void palindrome() {
        int num;
        printf("enter a number:");
        scanf("%d" , &num);
        if( num == reve(num)) {
                printf(" number is a palindromen\n");
        } else {
                printf("number is not a palindrome\n");
        }
}

int reve(int i) {
        int rem;
        int rev = 0;
        while( i != 0 ) {
                rem = i % 10;
                rev = (rev * 10) + rem;
                i = i / 10;
        }
        return rev;
}

