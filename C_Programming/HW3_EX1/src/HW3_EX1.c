/*
 ============================================================================
 Name        : HW_EX2.c
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
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	printf("enter the elements of 1st matrix :\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("a%d%d: \n",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("enter the elements of 2nd matrix :\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("a%d%d: \n",i,j);
			scanf("%f",&b[i][j]);
		}
	}

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("Sum Of Matrix : ");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%0.2f \t",sum[i][j]);
		}
	}
}
