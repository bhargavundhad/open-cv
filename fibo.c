/*
 * fibo.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("Enter the number =");
	scanf("%d",&n);
	printf("\n");
	fibo(n);
 return 0;
}
void fibo(int n1)
{
	int i,a=0,b=1,c;
	for(i=0;i<n1;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}

