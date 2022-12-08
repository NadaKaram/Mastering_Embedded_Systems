/*
 ============================================================================
 Name        : HW6_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char arr[28];
	int m=0;
	for(char a='A';a<='Z';a++)
	{
		arr[m]=a;
		m++;
	}
	char *ptr=NULL;
	ptr=arr;
	for(int i=0;i<28;i++)
	{
		printf("%c\t",*ptr);
		ptr++;
	}
}
