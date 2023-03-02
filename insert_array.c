/*
 * insert_array.c
 *
 *  Created on: 15-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
void insert(int *);
void update(int *);
void delete(int *);
int main()
{
	int a[size],i;

	for(i=0;i<size;i++)
	{
		printf("Enter the number =");
		scanf("%d",&a[i]);
	}
    insert(a);
    printf("\n");
    update(a);
    printf("\n");
    delete(a);
 return 0;
}
void insert(int *p1)
{
   int i,t1,t2;

   printf("Enter the position =");
   scanf("%d",&t1);

   printf("Enter the value =");
   scanf("%d",&t2);

     for(i=size;i>=t1;i--)
     {
    	 if(i==t1)
    	 {
    		 p1[i]=t2;
    	 }
    	 else
    	 {
    		 p1[i]=p1[i-1];
    	 }
     }

     printf("\n After insert in array:-\n");
     for(i=0;i<=size;i++)
     {
	    printf("a[%d]=%d\n",i,*(p1+i));
     }
}
void update(int *p2)
{
	 int i,t1,t2;

	   printf("Enter the position =");
	   scanf("%d",&t1);

	   printf("Enter the new  value =");
	   scanf("%d",&t2);

	   for(i=0;i<size;i++)
	   {
          if(i==t1-1)
          {
              p2[i]=t2;
          }
	   }

	   printf("\nAfter update in array:-\n");
	   for(i=0;i<=size;i++)
	    {
	  	  printf("a[%d]=%d\n",i,*(p2+i));
	    }
}
void delete(int *p3)
{

	 int i,t1;

	   printf("Enter the position =");
	   scanf("%d",&t1);

	   for(i=t1-1;i<size;i++)
	   {

			   p3[i]=p3[i+1];
	   }

	   printf("\nAfter update in array:-\n");
	   for(i=0;i<=size-1;i++)
	   {
		  	printf("a[%d]=%d\n",i,*(p3+i));
	   }

}
