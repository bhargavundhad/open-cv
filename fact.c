/*
 * fact.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int fact(int);
int main()
{
   int a,result;
   printf("Enter the number =");
   scanf("%d",&a);
   result=fact(a);
   printf("factorial is given number =%d",result);
 return 0;
}
int fact(int n1)
{
    if(n1==0)
    {
    	return 0;
    }
    else if(n1==1)
    {
    	return 1;
    }
    else
    {
    	return n1*fact(n1-1);
    }
}

