/*
 ============================================================================
 Name        : HW3_EX8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char str[30];
	printf("enter a string :");
	gets(str);
	int m = strlen(str)-1;
	for(int i= m;str[i]!='\0';i--)
	{
		printf("%c",str[i]);
	}
}
