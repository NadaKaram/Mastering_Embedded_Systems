/*
 ============================================================================
 Name        : HW3_EX6.c
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
	char c;
	int count;
	printf("enter a string :");
	gets(str);
	printf("enter a character to find the frequency :");
	scanf("%c",&c);
	for(int i=0;str[i] !='\0';i++)
	{
		if(str[i]== c)
		{
			count++;
		}
	}
	printf("the frequency is : %d",count);
}
