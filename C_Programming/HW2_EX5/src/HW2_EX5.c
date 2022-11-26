/*
 ============================================================================
 Name        : HW2_EX5.c
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
	char a;
	printf("enter an alphabet : ");
	scanf("%c",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))
	{
		printf("%c is an alphabet number",a);
	}
	else
	{
		printf("%c is not an alphabet number",a);
	}
	return 0;
}
