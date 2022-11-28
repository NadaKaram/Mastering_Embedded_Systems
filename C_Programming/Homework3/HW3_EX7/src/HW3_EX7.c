/*
 ============================================================================
 Name        : HW3_EX7.c
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
	char str[30];
	int count;
	printf("enter a string :");
	gets(str);
	for(int i=0;str[i] !=0;i++)
	{
		count++;
	}
	printf("the length is : %d",count);
}
