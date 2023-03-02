/*
 * pt.c
 *
 *  Created on: 31-Jan-2023
 *      Author: root
 */
#include<stdio.h>
void pattern(int);
int main()
{
	int n;
	printf("Enter the no:-");
	scanf("%d",&n);
	pattern(n);
	return 0;
}
void pattern(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

