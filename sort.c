/*
 * sort.c
 *
 *  Created on: 24-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
void ascending(int n[size]);
void descending(int p[size]);
int main()
{
    int a[size],i,b[size],j;
    for(i=0;i<size;i++)
    {
      printf("Enter the number =");
      scanf("%d",&a[i]);
    }
    printf("\n");
    ascending(a);

    for(j=0;j<size;j++)
    {
        printf("Enter the number =");
        scanf("%d",&b[j]);
    }
    printf("\n");
    descending(b);
  return 0;
}
void ascending(int n[size])
{
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
      {
    	  if(n[i]>n[j])
    	  {
    		int temp =n[i];
    		    n[i]=n[j];
    		    n[j]=temp;
    	  }
      }
   }

   printf("Sorting 1D array in ascending\n");
   for(int i=0;i<size;i++)
   {
	   printf("%d\n",n[i]);
   }
   printf("\n");
}
void descending(int p[size])
{
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
      {
    	  if(p[i]<p[j])
    	  {
    		int temp1 =p[i];
    		    p[i]=p[j];
    		    p[j]=temp1;
    	  }
      }
   }

   printf("Sorting 1D array in descending\n");
   for(int i=0;i<size;i++)
   {
	   printf("%d\n",p[i]);
   }

}
