/*
 ============================================================================
 Name        : HW2_EX3.c
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
	float a,b,c;
	printf("enter three numbers :");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%f is the largest number",a);
		}
		else
		{
			printf("%f is the largest number",c);
		}
	}
	else
	{

		if(a>c)
		{
			printf("%f is the largest number",a);
		}
		else
		{
			printf("%f is the largest number",c);
		}
	}
}
