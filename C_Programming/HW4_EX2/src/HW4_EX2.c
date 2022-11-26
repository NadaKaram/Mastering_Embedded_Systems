/*
 ============================================================================
 Name        : HW4_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int c;
	printf("enter a number : ");
	scanf("%d",&c);
	int m = factorial(c);
	printf("the factorial of %d is %d",c,m);
	return 0;

}
int factorial(int n)
{
	while(n != 1)
	{
		return n*factorial(n-1);
	}
}
