/*
 ============================================================================
 Name        : HW2_EX8.c
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
	float a,b,result;
	char operator;
	printf("enter an operator : ");
	scanf("%c",&operator);
	printf("enter two numbers : ");
	scanf("%f%f",&a,&b);
	switch(operator)
	{
	case'+':
	{
		result =a+b;
		printf("result is %0.2f",result);
		break;
	}
	case'-':
	{
		result =a-b;
		printf("result is %0.2f",result);
		break;
	}
	case'*':
	{
		result =a*b;
		printf("result is %0.2f",result);
		break;
	}
	case'/':
	{
		result =a/b;
		printf("result is %0.2f",result);
		break;
	}
	default:
		printf("this is not valid operator");
		break;

	}
	return 0;
}
