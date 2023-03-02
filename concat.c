/*
 * concat.c
 *
 *  Created on: 11-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void conct(char *,char *);
int main()
{
   char ch1[40],ch2[40];
   char *p1,*p2;

       p1=ch1;
       p2=ch2;

       printf("Enter first string =");
       scanf("%s",p1);
       printf("Enter second string =");
       scanf("%s",p2);

       conct(p1,p2);
   return 0;
}
void conct(char *ch1,char *ch2)
{
	int i,l1=0,l2=0,k;

	   i=0;
	   while(ch1[i]!='\0')
	   {
		   l1++;
		   i++;
	   }

	   i=0;
	   while(ch2[i]!='\0')
	   {
	   	  l2++;
	   	  i++;
	   }

	   k=l1;
	   for(i=0;i<=l2;i++)
	   {
           ch1[k]=ch2[i];
            k++;
	   }
	   ch1[k]='\0';

       printf("\n concatenate two string =%s",ch1);
}
