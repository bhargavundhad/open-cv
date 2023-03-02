/*
 * mul_recu.c
 *
 *  Created on: 08-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int mul(int,int);
int main()
{
	int a,b,result;

	printf("Enter first number =");
	scanf("%d",&a);
	printf("Enter second number =");
    scanf("%d",&b);

    result=mul(a,b);
    printf("Multiplication two integer =%d",result);
 return 0;
}
int mul(int a,int b)
{
    if(b==0)
    {
    	return 0;
    }
    else if(a==0)
    {
    	return 0;
    }
    else
    {
    	return a+mul(a,b-1);
    }
}
