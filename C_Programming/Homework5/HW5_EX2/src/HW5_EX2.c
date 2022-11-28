/*
 ============================================================================
 Name        : HW5_EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct distance
{
	float inch;
	int feet;
};
struct distance add(struct distance x1,struct distance x2)
{
	struct distance result;
	result.feet=x1.feet + x2.feet;
	result.inch =x1.inch + x2.inch;
	while(result.inch >=12)
	{
		result.feet+=1;
		result.inch-=12;
	}
	return result;
}
int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	struct distance distance1 ,distance2,result;
	printf("enter information for 1st distance : ");
	scanf("%d %f",&distance1.feet,&distance1.inch);
	printf("enter information for 2nd distance : ");
	scanf("%d %f",&distance2.feet,&distance2.inch);
	result=add(distance1,distance2);
	printf("sum of distances is %d\'-%0.1f\"",result.feet,result.inch);

}
