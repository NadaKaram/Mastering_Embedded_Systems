/*
 ============================================================================
 Name        : HW6_EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char arr[10];
	printf("enter a string : ");
	gets(arr);
	int b=strlen(arr);
	char *ptr=NULL;
	ptr=&arr[b-1];
	while(b !=0)
	{
		printf("%c",*ptr);
		ptr--;
		b--;
	}

	return 0;
}
