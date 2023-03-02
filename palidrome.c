/*
 * palidrome.c
 *
 *  Created on: 11-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int  pali(char *s);
int main()
{
	char s[40],result;
	char *p1;

	   p1=s;

	     printf("Enter first string =");
	     scanf("%s",p1);

    result=pali(s);

    if(result==0)
    {
    	printf("\nString is not palindrome\n");
    }
    else
    {
    	printf("\nString is palindrome\n");
    }
 return 0;
}
int pali(char *s)
	{
		int i,l1=0;

		i=0;
		while(s[i]!='\0')
		{
			l1++;
			i++;
		}

		for(i=0;i<l1;i++)
		{
			if(s[i]!=s[l1-i-1])
			{
              return 0;
			}
		}
	}
