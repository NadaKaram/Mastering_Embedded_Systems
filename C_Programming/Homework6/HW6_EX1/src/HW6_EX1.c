/*
 ============================================================================
 Name        : HW6_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m=26;
	printf("Address of m is %p \n",&m);
	printf("value of m is %d \n",m);
	int *ab = NULL;
	ab=&m;
	printf("Address of ab is %p \n",ab);
	printf("value of ab is %d \n",*ab);
	m=34;
	printf("Address of ab is %p \n",ab);
	printf("value of ab is %d \n",*ab);
	*ab=7;
	printf("Address of m is %p \n",&m);
	printf("value of m is %d",m);

}
