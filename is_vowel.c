#include<stdio.h>
void is_vowel() {
    char ch;
    printf("enter an alphabet:");
    scanf(" %c" , &ch);
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("alphabet is a vowel\n");
}
else {
    printf("alphabet is not a vowel\n");
}
}

