/*
 ============================================================================
 Name        : HW1_EX4.c
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
	float x,y,sum;
	printf("enter two numbers : ");
	scanf("%f %f",&x,&y);
	sum= x + y;
	printf("the sum is : %f",sum);

}
