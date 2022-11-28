/*
 ============================================================================
 Name        : HW4_EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime( int a)
{
	int i;
	int flag = 0;
	for(i=2;i<=a/2;i++)
	{
		if(a%i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
int main(void)
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a,b,flag;
	printf("enter two numbers :");
	scanf("%d %d",&a,&b);
	printf("prime numbers between %d and %d is : \n",a,b);
	for(int i=a;i<=b;i++)
	{
		if(i==1)
			continue;
		flag = prime(i);

		if(flag==0)
		{
			printf("%d \t",i);
		}
	}
}
