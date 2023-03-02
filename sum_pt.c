/*
 * sum_pt.c
 *
 *  Created on: 09-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
int sum(int a[size]);
int main()
{
    int b[size],output;

    output=sum(b);
    printf("\n sum of all elements =%d",output);
 return 0;
}
int sum(int a[size])
{

	int *p,b[size],i,sum=0;

	p=b;
    for(i=0;i<size;i++)
	{
	    printf("Enter the number =");
	    scanf("%d",p);
	    p++;
    }

    p=b;
    for(i=0;i<size;i++)
    {
    	sum=sum+p[i];
    }

   return sum;
}
