#include<stdio.h>
#include"address_pointer.c"
#include"sum_pointers.c"
void pointers() {
	int x;
	char ch;
	p:
	printf("MENU:\n1:sum using pointers\n2:address of given number\n");
	printf("Enter your choice:");
	scanf("%d" , &x);
	switch(x) {
		case 1:sum_pointers();
		       break;
		case 2:address_pointer();
		       break;
		}
	printf("Do you want to continue in pointers topic? (y / n) :");
	scanf(" %c" , &ch);
	if (ch == 'y') {
	goto p;
	}
}
