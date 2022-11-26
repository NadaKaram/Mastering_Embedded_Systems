/*
 ============================================================================
 Name        : HW2_EX7.c
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
	int a,factorial=1;
	printf("enter an integer : ");
	scanf("%d",&a);
	if(a>0)
	{
		for(int i=a;i>0;i--)
		{
			factorial*=i;
		}
		printf("factorial = %d",factorial);
	}
	else
	{
		printf("Error !! factorial of negative number doesn't exist");
	}
	return 0;
}
