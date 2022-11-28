/*
 ============================================================================
 Name        : HW2_EX4.c
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
	float a;
	printf("enter a number :");
	scanf("%f",&a);
	if(a>0)
	{
		printf("%f is a positive number",a);
	}
	else
	{
		printf("%f is a negative number",a);
	}
	return 0;
}
