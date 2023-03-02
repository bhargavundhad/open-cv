/*
 * cm_string.c
 *
 *  Created on: 09-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int cmp(char *s1,char *s2);
int main()
{
    char s1[40],s2[40],result;
    char *p1,*p2;

    p1=s1;
    p2=s2;

    printf("Enter first string =");
    scanf("%s",p1);
    printf("Enter second string =");
    scanf("%s",p2);

    result=cmp(p1,p2);

    if(result==0)
    {
    	printf("\n Two strings are equal\n");
    }
    else
    {
    	printf("\n Two strings are not equal\n");
    }
  return 0;
}
int cmp(char *s1,char *s2)
{
   int i,l1=0,l2=0,diff=0;
   char *p1,*p2;

       p1=s1;
       p2=s2;

   i=0;
   while(p1[i]!='\0')
   {
	   l1++;
	   i++;
   }

   i=0;
   while(p2[i]!='\0')
   {
   	  l2++;
   	  i++;
   }

   if(l1!=l2)
   {
      //printf("\nString length is not equal\n");
	   return 1;
   }

   i=0;
   while(p1[i]!='\0')
   {
	   if(p1[i]!=p2[i])
	   {
          diff++;
          break;
	   }
	   else
	   {
		   i++;
	   }
   }
   return diff;
}
