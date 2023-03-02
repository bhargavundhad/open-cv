/*
 * string.c
 *
 *  Created on: 14-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void str_rev(char *);
int main()
{
  char s1[100];

  printf("Enter the string =");
  scanf("%s",s1);

  str_rev(s1);
 return 0;
}
void str_rev(char *s1)
{
   int i,l1=0;
   char s2[100];

   i=0;
   while(s1[i]!='\0')
   {
      l1++;
      i++;
   }

   for(i=0;i<l1;i++)
   {
	   s2[i]=s1[l1-i-1];
   }
   s2[i]='\0';

   printf("reverse string =%s",s2);
}

