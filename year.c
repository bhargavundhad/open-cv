/*
 * year.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int leap(int);
int main()
{
   int a,result;

   printf("Enter the year =");
   scanf("%d",&a);
   result=leap(a);

   if(result==0)
   {
	   printf("This year is leap year");
   }
   else
   {
	   printf("This year is not leap year");
   }
 return 0;
}
int leap(int n1)
{
   if(n1%4==0)
   {
	   return 0;
   }
   else
   {
      return 1;
   }
}
