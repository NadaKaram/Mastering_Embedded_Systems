/*
 ============================================================================
 Name        : HW2_EX6.c
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
	int a,sum;
	printf("enter an integer : ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		sum+=i;
	}
	printf("the sum is %d",sum);
	return 0;
}
