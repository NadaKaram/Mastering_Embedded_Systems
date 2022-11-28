/*
 ============================================================================
 Name        : HW5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1415
#define area(r) (Pi*(r)*(r))

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float radius,Area;
	printf("Enter the radius : ");
	scanf("%f",&radius);
	Area= area(radius);
	printf("Area = %0.2f ",Area);
}
