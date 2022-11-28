/*
 ============================================================================
 Name        : HW2_EX1.c
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
	int a;
	printf("enter an integer you want to check : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is an even number",a);
	}
	else
	{
		printf("%d is an odd number",a);
	}
	return 0;
}
