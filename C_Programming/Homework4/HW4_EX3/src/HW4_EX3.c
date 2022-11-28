/*
 ============================================================================
 Name        : HW4_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void reverse();
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("enter a sentence");
	reverse();
	return 0;

}
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
		reverse();
		printf("%c",c);
	}
}
