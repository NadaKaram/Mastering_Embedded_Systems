/*
 ============================================================================
 Name        : HW4_EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power (int a,int b)
{
	if (b != 0)
	{
		return (a * power(a,b-1));
	}
	else
	{
		return 1;
	}

}
int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int x,b,n;
	printf("enter base number :\n");
	scanf("%d",&x);
	printf("enter power number: ");
	scanf("%d",&b);
	n=power(x,b);
	printf("%d ^ %d  is %d",x,b,n);
}



/* int power (int a,int b)
{
	int factorial =1;
	for(int i=0;i<b;i++)
	{
		factorial=factorial*a;
	}
	return factorial;
}
 */
