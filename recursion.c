#include<stdio.h>
#include<stdlib.h>
#include"ncr_recursion.c"
#include"fact_recursion.c"
void recursion() {
	int i;
	char ch;
	o:
	printf("MENU:\n1:ncr\n2:factorial\n");
	printf("Enter your choice:");
	scanf("%d" , &i);
	switch(i) {
		case 1:ncr_recursion();
		       break;
		case 2:fact_recursion();
		       break;
                  }
	printf("Do you want to continue in recursion? (y / n) :");
	scanf(" %c" , &ch);
	if( ch == 'y' ) {
	goto o;
	}
    }

