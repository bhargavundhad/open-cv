/*
 * modular.c
 *
 *  Created on: 28-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define m 3
#define size m+m
void input(int a[m],int b[m]);
void sort(int a[m],int b[m]);
void merge(int c[m],int d[m]);
void sort_merge();
int main()
{
	int a[m],b[m];
	input(a,b);
	sort(a,b);
	merge(a,b);
	sort_merge();
}
void input(int a[m],int b[m])
{
   int i,j;
   for(i=0;i<m;i++)
   {
	   printf("Enter the number =");
	   scanf("%d",&a[i]);
   }
   printf("\n");
   for(j=0;j<m;j++)
   {
	   printf("Enter the number =");
	   scanf("%d",&b[j]);
   }
   printf("\n");
}
void sort(int a[m],int b[m])
{
   int i,j,temp,temp1;

   for(i=0;i<m;i++)
   {
	   for(j=i+1;j<m;j++)
	   {
		   if(a[i]<a[j])
		   {
			   temp=a[i];
			   a[i]=a[j];
			   a[j]=temp;
		   }
	   }
   }
   printf("\n");void merge(int a[m],int b[m]);

   printf("Sort the details in ascending order\n");
   for(i=0;i<m;i++)
   {
	   printf("%d\n",a[i]);
   }
   printf("\n");

   for(i=0;i<m;i++)
   {
  	  for(j=i+1;j<m;j++)
  	  {
  	     if(b[i]<b[j])
  	     {
  		     temp1=b[i];
  		     b[i]=b[j];
  		     b[j]=temp1;
  		 }
  	  }
   }
   printf("\n");

     printf("Sort the details in ascending order\n");
     for(i=0;i<m;i++)
     {
  	   printf("%d\n",b[i]);
     }
     printf("\n");
}
void merge(int c[m],int d[m])
{
	int e[size],i,j;

	 for(i=0;i<m;i++)
	   {
		   printf("Enter the number =");
		   scanf("%d",&c[i]);
	   }
	   printf("\n");
	   for(j=0;j<m;j++)
	   {
		   printf("Enter the number =");
		   scanf("%d",&d[j]);
	   }
	   printf("\n");

	for(i=0;i<size;i++)
	{
		if(i<m)
		{
			e[i]=c[i];
		}
		else
		{
			e[i]=d[i-m];
		}
	}
	printf("\n");

	printf("Merge array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",e[i]);
	}
}
void sort_merge()
{
	int c[size],i,j,temp;
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

	printf("Sort details\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",c[i]);
	}
}

