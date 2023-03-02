/*
 * sum_2D.c
 *
 *  Created on: 10-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define m 3
#define n 3
void sum(int a[m][n],int *p);
int main()
{
   int a[m][n],i,j,*p;

   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
    	  printf("Enter the number =");
    	  scanf("%d",&a[i][j]);
      }
   }

   sum(a,&p);
}
void sum(int a[m][n],int *p)
{
   int c[9],i,k,j,sum=0;

   k=0;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
         c[k]=a[i][j];
         k++;
	   }
   }
   printf("\n");

   k=0;
   for(i=0;i<9;i++)
   {
	   printf("%d\n",c[k]);
	   k++;
   }

   p=c;
   k=0;
   for(i=0;i<9;i++)
   {
      sum=sum+*p;
      p++;
   }

   printf("\n sum of all elements =%d",sum);
}
