/*
 ============================================================================
 Name        : HW5_EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct complex
{
	float real;
	float imj;
};
struct complex addComplex (struct complex x1 ,struct complex x2)
{
	struct complex result;
	result.real = x1.real + x2.real;
	result.imj = x1.imj + x2.imj;
	return result;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct complex num1 , num2, result;
	printf("enter real and imj of 1st number : ");
	scanf("%f %f",&num1.real,&num1.imj);
	printf("enter real and imj of 2nd number : ");
	scanf("%f %f",&num2.real,&num2.imj);
	result = addComplex(num1,num2);
	printf("sum = %0.1f + %0.1fi",result.real,result.imj);
}
