/*
 * pow.c
 *
 *  Created on: 09-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int power(int,int);
int main()
{
	int n1,n2,result;

	printf("Enter the number =");
	scanf("%d",&n1);
	printf("Enter the power =");
	scanf("%d",&n2);

	result=power(n1,n2);
	printf("power value of number =%d",result);
 return 0;
}
int power(int a,int b)
{
   if(b==0)
   {
	   return 1;
   }
   else if(b>0)
   {
	   return a*power(a,(b-1));
   }
   else
   {
	   return 1;
   }
}
