#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
} s;

void employee_details()
{
printf("enter information:\n");

printf("enter name:");
scanf("%s", s.name);

printf("enter roll number: ");
scanf("%d", &s.roll);

printf("enter marks: ");
scanf("%f", &s.marks);

printf("displaying information: \n");

printf("name: ");
puts(s.name);

printf("roll number: %d\n", s.roll);

printf("marks: %.1f\n", s.marks);
}
