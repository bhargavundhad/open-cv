/*
 * count.c
 *
 *  Created on: 27-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define m 3
#define n 3
int prime(int a[m][m]);
int main()
{
	int b[m][n],i,j,result;

	for(i=0;i<m;i++)
	{
       for(j=0;j<n;j++)
       {
          printf("Enter the number =");
          scanf("%d",&b[i][j]);
       }
	}

     result=prime(b);
     printf("total number of elements holds prime number =%d",result);
  return 0;
}
int prime(int a[m][n])
{
   int i,j,k,count,sum=0;

   for(i=0;i<m;i++)
   {
	   for(j=0;j<n;j++)
	   {
		   count=0;
             for(k=1;k<=a[i][j];k++)
             {
            	 if(a[i][j]%k==0)
            	 {
                     count++;
            	 }
             }
             if(count==2)
             {
            	 sum++;
             }
	   }
   }
   return sum;
}
