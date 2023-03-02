/*
 * prime_num.c
 *
 *  Created on: 28-Jan-2023
 *      Author: root
 */
#include<stdio.h>
void prime(int);
int main()
{
	int a;
	printf("Enter the number =");
	scanf("%d",&a);
    prime(a);
  return 0;
}
void prime(int n1)
{
   int i,count=0;

   for(i=1;i<=n1;i++)
   {
      if(n1%i==0)
      {
         count++;
      }
   }

   if(count==2)
   {
      printf("%d number is prime",n1);
   }
   else
   {
	   printf("%d number is not prime",n1);
   }
}


