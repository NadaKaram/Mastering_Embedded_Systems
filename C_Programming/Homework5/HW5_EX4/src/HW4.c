/*
 ============================================================================
 Name        : HW4.c
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
	float marks;
};
int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct student students[10];
	printf("Enter information of students \n");
	for(int i=0; i<10 ; i++)
	{
		printf("for roll number %d \n",i+1);
		printf("Enter name : ");
		scanf("%s",students[i].name);
		printf("Enter Marks : ");
		scanf("%f",&students[i].marks);
	}
	for(int i=0;i<10;i++)
	{
		printf("Information for roll number %d \n",i+1);
		printf("Name : %s \n",students[i].name);
		printf("Marks : %0.1f \n",students[i].marks);
	}

}
