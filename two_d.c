/*
 * two_d.c
 *
 *  Created on: 09-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define m 3
#define n 3
void sort_2(int n1[m][n]);
int main()
{
    int b[m][n];
    sort_2(b);
}
void sort_2(int n1[m][n])
{
    int i,j,temp,k,*p;
   int c[m*n];

   p=n1;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   printf("Enter the number =");
		   scanf("%d",p);
		   p++;
	   }
   }

   k=0;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
          c[k]=n1[i][j];
          k++;
	   }
   }
   printf("\n");

   for(i=0;i<m*n;i++)
   {
	 printf("%d\n",c[i]);
   }
   printf("\n");

   for(i=0;i<m*n;i++)
   {
	   for(j=i+1;j<m*n;j++)
	   {
		   if(c[i]<c[j])
		   {
			   temp=c[i];
			   c[i]=c[j];
			   c[j]=temp;
		   }
	   }
   }
   printf("\n");

   k=0;
   for(i=0;i<m;i++)
   {
   	 for(j=0;j<n;j++)
   	  {
         n1[i][j]=c[k];
         k++;
   	  }
   }

   p=n1;
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   printf("%d",*p);
		   p++;
	   }
	   printf("\n");
   }
}

