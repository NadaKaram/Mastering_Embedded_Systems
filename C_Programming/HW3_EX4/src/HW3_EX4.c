/*
 ============================================================================
 Name        : HW3_EX4.c
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
	int z;
	printf ("enter num of elements :");
	scanf("%d",&z);
	 int a[z];
	 printf("enter the elements : ");
	 for(int i=0;i<z;i++)
	 {
		 scanf("%d",&a[i]);
	 }
	 for(int i=0;i<z;i++)
		 {
			 printf("%d \t \n",a[i]);
		 }

     int n,num;
	 printf("enter the num to be inserted : ");
	 scanf("%d",&num);
	 printf("enter the location : ");
	 scanf("%d",&n);
	for(int i=5;i>=n;i--)
	{
		a[i]=a[i-1];
	}
	a[n-1]=num;
	 for(int i=0;i<6;i++)
	 {
		 printf("%d \t",a[i]);
	 }
}
