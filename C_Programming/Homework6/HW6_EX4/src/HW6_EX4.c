/*
 ============================================================================
 Name        : HW6_EX4.c
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
	printf("enter the number of elements (max 15) : \n");
	scanf("%d",&n);
	int arr[n];
	int arr_reverse[n];
	printf("enter %d elements : \n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int *ptr = NULL;
	int *ptr_rev=NULL;
	ptr=arr;
	ptr_rev=arr_reverse;
	for(int i=0;i<n;i++)
	{
		ptr++;

	}

	for(int i=n-1;i>=0;i--)
	{
		ptr--;
		*ptr_rev =*ptr;
		printf("element-%d: %d \n",i+1,*ptr_rev);

		ptr_rev++;
		n--;
	}

}
