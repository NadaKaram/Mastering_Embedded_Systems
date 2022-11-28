/*
 ============================================================================
 Name        : HW5_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[10];
	int roll_number;
	float marks;
};
int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct student x;
	printf("enter information of students : \n");
	printf("Enter name : ");
	scanf("%s",&x.name[0]);
	printf("Enter roll number : ");
	scanf("%d",&x.roll_number);
	printf("Enter marks : ");
	scanf("%f",&x.marks);
	printf("name : %s \n roll_number : %d \n marks: %f",&x.name[0],x.roll_number,x.marks);
}
