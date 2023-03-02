/*
 * vowel.c
 *
 *  Created on: 15-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void vowe(char *s1);
int main()
{
    char s1[50],*p1;
    p1=s1;

    printf("Enter the string =");
    scanf("%s",p1);
  vowe(s1);
 return 0;
}
void vowe(char *s1)
{
   int i,sum=0;

   for(i=0;i<s1[i]!='\0';i++)
   {
      if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' ||s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
      {
    	  sum++;
      }
   }

   printf("\ncount number of vowels in string =%d",sum);
}
