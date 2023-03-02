/*
 * 2d_array.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
#include<stdio.h>
//#define row 3
//#define colum 3
#define size 3*3
void ascending(int n[3][3]);
void descending(int n1[3][3]);
int main()
{
	int a[3][3],i,j,b[3][3];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the number a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
    {
	    for(j=0;j<3;j++)
	    {
	    	printf("%d",a[i][j]);
	    }
	    printf("\n");
	}
	ascending(a);

	for(i=0;i<3;i++)
	{
    	for(j=0;j<3;j++)
	    {
	    	printf("Enter the number a[%d][%d] =",i,j);
	    	scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
    {
		for(j=0;j<3;j++)
		{
		  	printf("%d",b[i][j]);
	    }
	 printf("\n");
    }
	 descending(b);
}
void ascending(int n[3][3])
	{
		int i,j,temp,k,c[size];

	   k=0;
	   for(i=0;i<3;i++)
	   {
	     for(j=0;j<3;j++)
		 {
	        c[k]=n[i][j];
	        k++;
		 }
	   }

	   for(i=0;i<size;i++)
	   {
		   for(j=i+1;j<size;j++)
		   {
			   if(c[i]>c[j])
			   {
				   temp=c[i];
				   c[i]=c[j];
				   c[j]=temp;
			   }
		   }
	   }

	   k=0;
	   for(i=0;i<3;i++)
	   {
	     for(j=0;j<3;j++)
	   	 {
	         n[i][j]=c[k];
	         k++;
	   	 }
	   }

	   printf("sort 2D array in ascending order\n");
	   for(i=0;i<3;i++)
	   {
		   for(j=0;j<3;j++)
		   {
	          printf("%d",n[i][j]);
		   }
		   printf("\n");
	   }
	}
void descending(int n1[3][3])
	{
		int i,j,temp,k,c[size];

	   k=0;
	   for(i=0;i<3;i++)
	   {
	     for(j=0;j<3;j++)
		 {
	        c[k]=n1[i][j];
	        k++;
		 }
	   }

	   for(i=0;i<size;i++)
	   {
		   for(j=i+1;j<size;j++)
		   {
			   if(c[i]<c[j])
			   {
				   temp=c[i];
				   c[i]=c[j];
				   c[j]=temp;
			   }
		   }
	   }

	   k=0;
	   for(i=0;i<3;i++)
	   {
	     for(j=0;j<3;j++)
	   	 {
	         n1[i][j]=c[k];
	         k++;
	   	 }
	   }

	   printf("sort 2D array in  order descending\n");
	   for(i=0;i<3;i++)
	   {
		   for(j=0;j<3;j++)
		   {
	          printf("%d",n1[i][j]);
		   }
		   printf("\n");
	   }
	}
