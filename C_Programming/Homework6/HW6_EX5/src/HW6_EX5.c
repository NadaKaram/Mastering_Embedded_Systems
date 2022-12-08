/*
 ============================================================================
 Name        : HW6_EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct employee
{
	char name[10];
	int id;
};
int main(void) {
	struct employee emp1={"Alex",100}, emp2={"mohamed",101},emp3={"ahmed",102};
	struct employee (*arr[])={&emp1,&emp2,&emp3}; // array of three pointers to structures
	struct employee (*(*pt)[3]) = &arr;  // pointer to an array of three pointers to structures
	printf("the name of emp1 is : %s \n",(*(*pt))->name);
	printf("the id of emp1 is : %d \n",(*(*pt))->id);
	printf("the name of emp2 is : %s \n",(*(arr+1))->name); // *ptr = *&arr = arr
	printf("the id of emp2 is : %d \n",(*(*pt+1))->id);
	printf("the name of emp3 is : %s \n",(*(*pt+2))->name);
	printf("the id of emp3 is : %d \n",(*(*pt+2))->id);
}
