#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"recursion.c"
#include"ifelse.c"
#include"array_struct.c"
#include"pointers.c"
int main(int argc , char *argv[]) {
	char ch;
        int x;
	if(argc != 2) {
	printf("Insufficient arguments\n");
	}
	if (strcmp(argv[1] , "recursion") == 0) {
	recursion();
        }
        else if (strcmp(argv[1] , "ifelse") == 0) {
	ifelse();
        }
        else if (strcmp(argv[1] , "array_struct") == 0) {
	array_struct();
        } 
        else if (strcmp(argv[1] , "pointers") == 0)  {
        pointers();
        }
	printf("Do you want to continue in programme? (y / n) :");
	scanf(" %c" , &ch);
	if(ch == 'y') {
	goto m;
        }
	else if(ch == 'n') {
	printf("Thanks!\n");
	exit(0);
	}   
        m:
        printf("MENU:\n1:recursion\n2:ifelse\n3:array_struct\n4:pointers\n");
        printf("Enter your choice:");
        scanf(" %d" , &x);
        switch(x) {
        case 1:recursion();
               break;
        case 2:ifelse();
               break;
        case 3:array_struct();
               break;    
	case 4:pointers();
	       break;
    }        
	printf("Do you want to continue in the programme? (y / n):");
	scanf(" %c" , &ch);
	if(ch == 'y') {
        goto m;
    } else if(ch == 'n') {
        printf("Thanks!\n");
        exit(0);
    }
return 0;
} 
