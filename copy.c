/*
 * copy.c
 *
 *  Created on: 11-Feb-2023
 *      Author: root
 */
#include<stdio.h>
void cp(char *,char *);
int main()
{
	char s1[40],s2[40];
    char *p1,*p2;

     p1=s1;
     p2=s2;
       printf("Enter first string =");
	   scanf("%s",p1);
     cp(s1,s2);
}
void cp(char *s1,char *s2)
{
	int i,l1=0;

	 i=0;
	 while(s1[i]!='\0')
	 {
	    l1++;
        i++;
     }

	 for(i=0;i<l1;i++)
	 {
		 s2[i]=s1[i];
	 }
	 s2[i]='\0';

	 printf("\n copy one string to second =%s",s2);
}
