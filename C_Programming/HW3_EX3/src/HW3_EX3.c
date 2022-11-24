/*
 ============================================================================
 Name        : HW3_EX3.c
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
	int n,m;
	printf("enter rows and columns of matrix");
	scanf("%d %d",&n,&m);
	int a[n][m];
	int b[m][n];
	printf("enter elements of matrix : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("enter element a%d%d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix \n");
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d \t",a[i][j]);
			}
			printf("\n");
		}
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				{
				b[i][j]=a[i][j];
				}
				else
				{
					b[i][j]=a[j][i];
				}
			}
		}
	printf("Transpose of matrix \n");
	for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				{
					printf("%d \t",b[i][j]);
				}
				printf("\n");
			}
}
