/*
 ============================================================================
 Name        : HW3_EX1.c
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
	int n;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	float a[n];
	float sum,average;

	for(int i=0;i<n;i++)
	{
		printf("Enter number : \n");
		scanf("%f",&a[i]);
	}
	for(int i=0;i<n;i++)
		{
			sum+=a[i];
		}
    average=sum/n;
    printf("Average = %f",average);
    return 0;
}

