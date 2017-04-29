#include<stdio.h>
void address_pointer() {
	int x;
	printf("Enter a number:");
	scanf("%d" , &x);
	void *ptr = &x;
	printf("Address is %u\n" , ptr);
}
