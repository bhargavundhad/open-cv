/*
 * operation.c
 *
 *  Created on: 16-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define m 2
#define n 2
void sm(int (*p1)[m],int (*p2)[m]);
void sub(int (*p1)[m],int (*p2)[m]);
void multi(int (*p1)[m],int (*p2)[m]);
void transpos(int (*p1)[m],int (*p2)[m]);
int main()
{

   int a[m][n],b[m][n],i,j;

   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   printf("Enter the number =");
		   scanf("%d",&a[i][j]);
	   }
   }
   printf("\n");

   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
	      printf("%d",a[i][j]);
	   }
	   printf("\n");
   }
   printf("\n");

   for(i=0;i<m;i++)
     {
  	   for(j=0;j<n;j++)
  	   {
  		   printf("Enter the number =");
  		   scanf("%d",&b[i][j]);
  	   }
     }
   printf("\n");

   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
	      printf("%d",b[i][j]);
	   }
	   printf("\n");
   }
   printf("\n");

   sm(a,b);
   sub(a,b);
   multi(a,b);
   transpos(a,b);
 return 0;
}

void sm(int (*p1)[m],int (*p2)[m])
{
    int i,j,sum=0;

    printf("Add two matrix using pointer :-\n");
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
    	   sum=p1[i][j]+p2[i][j];
    	   printf("%d ",sum); printf("\n");
       }
       printf("\n");
    }
    printf("\n");
}
void sub(int (*p1)[m],int (*p2)[m])
{
   int i,j,sub;

   printf("subtract two matrix using pointer :-\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
        sub=p1[i][j]-p2[i][j];
        printf("%d ",sub);
      }
      printf("\n");
   }
   printf("\n");
}

void multi(int (*p1)[m],int (*p2)[m])
{
   int i,j,sum,k;

   printf("Multiplication of two array :-\n");
   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   sum=0;
		   for(k=0;k<n;k++)
		   {
             sum+=p1[i][k]*p2[k][j];
		   }
		   printf("%d ",sum);
	   }
	   printf("\n");
   }
   printf("\n");
}
void transpos(int (*p1)[m],int (*p2)[m])
{
    int i,j;

    printf("Transpose of Array A:-\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d ",p1[j][i]);
    	}
    	printf("\n");
    }
    printf("\n");

    printf("Transpose of Array B:-\n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d ",p2[j][i]);
    	}
    	printf("\n");
    }
    printf("\n");
}

