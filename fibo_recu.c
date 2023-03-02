/*
 * fibo_recu.c
 *
 *  Created on: 08-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int fibo(int);
int main()
{
	int a,i;

	printf("Enter the number =");
	scanf("%d",&a);
	printf("\n");

	printf("Fibonacci series:- \n");
	for(i=0;i<a;i++)
	{
       printf("%d\n",fibo(i));
	}

 return 0;
}
int fibo(int n)
{
   if(n==0)
   {
	   return 0;
   }
   else if(n==1)
   {
	   return 1;
   }
   else
   {
	   return fibo(n-1) +fibo(n-2);
   }
}
