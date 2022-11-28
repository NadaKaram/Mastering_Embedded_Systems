/*
 ============================================================================
 Name        : HW2_EX2.c
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
	if(a=='i' ||a=='e' || a== 'o' || a=='a' || a=='u')
	{
		printf("%c is a vowel",a);
	}
	else
	{
		printf("%c is a constant",a);
	}
	return 0;
}
