/*
 * reverse.c
 *
 *  Created on: 14-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void rev(int *,int a);
int main()
{
	int size;
	printf("Enter the size of array =");
	scanf("%d",&size);
	printf("\n");

	int a[size],i;

	for(i=0;i<size;i++)
	{
		printf("Enter array elements =");
		scanf("%d",&a[i]);
	}
	printf("\n");

    rev(&a,size);
}
void rev(int *p1,int size)
{
   int b[size],i;

   for(i=0;i<size;i++)
   {
	   b[i]=p1[size-i-1];
   }

   printf("reverse 1D array elements;- \n");
   for(i=0;i<size;i++)
   {
	   printf("%d\n",b[i]);
   }
}
