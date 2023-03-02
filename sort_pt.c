/*
 * sort_pt.c
 *
 *  Created on: 08-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
void sort(int a[size]);
int main()
{
   int a[size],*p,i;

   p=a;
       for(i=0;i<size;i++)
       {
         printf("Enter the number =");
         scanf("%d",p);
         p++;
       }
       printf("\n");

       printf("Array of element:- \n");
       p=a;
       for(i=0;i<size;i++)
       {
          printf("%d\n",*p);
          p++;
       }
       printf("\n\n");

   sort(a);
}
void sort(int a[size])
{
	int *p,i,j,temp;

//    p=a;
//    for(i=0;i<size;i++)
//    {
//      printf("Enter the number =");
//      scanf("%d",p);
//      p++;
//    }
//    printf("\n");
//
//    printf("Array of element:- \n");
//    p=a;
//    for(i=0;i<size;i++)
//    {
//       printf("%d\n",*p);
//       p++;
//    }
//    printf("\n\n");

    p=a;
    for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}

    printf("Sort the array:-\n");
    p=a;
    for(i=0;i<=size-1;i++)
    {
      printf("%d\n",*(p+i));
    }
}
