/*
 ============================================================================
 Name        : HW1_EX5.c
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
    char m;
    printf("enter a character : ");
    scanf("%c",&m);
    printf("the ASCII value of %c is : %d",m,m);
}
