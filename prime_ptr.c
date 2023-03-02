/*
 * prime_ptr.c
 *
 *  Created on: 10-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
void prim(int a[size]);
int main()
{
	int a[size],i,*p;

	p=a;
	for(i=0;i<size;i++)
	{
		printf("Enter the number =");
		scanf("%d",p);
		p++;
	}

	prim(a);
  return 0;
}
void prim(int a[size])
{
	int i,j,count,sum=0;
//	p=a;
   for(i=0;i<size;i++)
   {
	   count=0;
       for(j=1;j<=a[i];j++)
       {
    	   if(a[i]%j==0)
    	   {
    		   count++;
    	   }
       }
       if(count==2)
       {
           sum++;
       }
   }
   printf("\n Total prime number in array =%d",sum);
}
