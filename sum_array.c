/*
 * sum_array.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define m 3
#define n 3
int sum_array(int a[m][n]);
int main()
{
	int result,b[m][n],i,j;

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
           printf("Enter the number =");
           scanf("%d",&b[i][j]);
		}
	}
	result=sum_array(b);
	printf("\n");
   printf(" Sum of all elements in array =%d",result);
 return 0;
}
int sum_array(int a[m][n])
{
	int i,j,sum=0;
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
           sum=sum+a[i][j];
    	}
    }
    return sum;
}

