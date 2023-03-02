/*
 * two_array.c
 *
 *  Created on: 15-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define ro 3
#define co 3
void two_rev(int (*p1)[ro]);
int main()
{
    int a[ro][co],i,j;

    for(i=0;i<ro;i++)
    {
    	for(j=0;j<co;j++)
    	{
           printf("Enter array elements =");
           scanf("%d",&a[i][j]);
    	}
    }
    two_rev(a);
}
void two_rev(int (*p1)[ro])
{
	int i,j,k;
	int c[ro*co],d[ro*co];

	k=0;
    for(i=0;i<ro;i++)
    {
    	for(j=0;j<co;j++)
    	{
           c[k]=p1[i][j];
           k++;
          // p1++;
    	}
    }
    printf("\n");

    printf("Convert 1d array:- \n");
    for(i=0;i<ro*co;i++)
    {
    	printf("%d\n",c[i]);
    }
    printf("\n");

    printf("assigning new array :-\n");
    for(i=0;i<ro*co;i++)
    {
       d[i]=c[ro*co-i-1];
    }

    for(i=0;i<ro*co;i++)
    {
       	printf("%d\n",d[i]);
    }
    printf("\n");

    k=0;
    for(i=0;i<ro;i++)
    {
     	for(j=0;j<co;j++)
        {
            p1[i][j]=d[k];
            k++;
        }
    }
    printf("\n");

    printf("reverse 2D array using pointer:- \n");
    for(i=0;i<ro;i++)
    {
    	for(j=0;j<co;j++)
    	{
    		printf("%d ",p1[i][j]);
    	}
    	printf("\n");
    }
}
