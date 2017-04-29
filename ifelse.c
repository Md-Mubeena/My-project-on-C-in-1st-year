#include<stdio.h>
#include<stdlib.h>
#include"prime.c"
#include"is_vowel.c"
#include"power.c"
#include"palindrome.c"
void ifelse() {
	int x;
	char ch;
	t:
	printf("MENU:\n1:prime\n2:vowel\n3:power\n4:palindrome\n");
	printf("Enter your choice:");
	scanf("%d" , &x);
	switch(x) {
		case 1:prime();
		       break;
		case 2:is_vowel();
		       break;
		case 3:power();
		       break;
		case 4:palindrome();
		       break;
		}
	printf("Do you want to continue in ifelse topic? (y / n) :");
	scanf(" %c" , &ch);
	if(ch == 'y') {
	goto t;
	}
}
