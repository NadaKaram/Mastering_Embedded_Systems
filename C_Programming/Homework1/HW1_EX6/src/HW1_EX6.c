/*
 ============================================================================
 Name        : HW1_EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a,b,temp;
	printf("enter variable of a : ");
	scanf("%d",&a);
	printf("enter variable of b : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("the variable of a is %d \n the variable of b is %d",a,b);

}
