#include<stdio.h>
#include<stdlib.h>
#include"matrix_sum.c"
#include"employee_details.c"
void array_struct() {
	int x;
	char ch;
	f:
	printf("MENU:\n1:sum of matrix\n2:employee details\n");
	printf("Enter your choice:");
	scanf("%d" , &x);
	switch(x) {
		case 1:matrix_sum();
		       break;
		case 2:employee_details();
		       break;
		}
	printf("Do you want to continue? (y / n) :");
	scanf(" %c" , &ch);
	if(ch == 'y') {
	goto f;
	}
}

