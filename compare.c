/*
 * compare.c
 *
 *  Created on: 25-Jan-2023
 *      Author: root
 */
#include<stdio.h>
struct date
{
   int d,m,y,d1,m1,y1;
};
int date(struct date);
int main()
{
	struct date s1;
	int result;
	printf("Enter first date =");
	scanf("%d",&s1.d);
	printf("Enter first month =");
	scanf("%d",&s1.m);
	printf("Enter first year =");
	scanf("%d",&s1.y);

	printf("Enter second date =");
    scanf("%d",&s1.d1);
    printf("Enter first month =");
    scanf("%d",&s1.m1);
    printf("Enter first year =");
    scanf("%d",&s1.y1);
    printf("\n");

    result=date(s1);
    if(result==0)
    {
       printf("Two dates are equal\n");
    }
    else
    {
       printf("Two dates are not equal\n");
    }
return 0;
}
int date(struct date s1)
{
   if(s1.d==s1.d1 && s1.m==s1.m1 && s1.y==s1.y1)
   {
	   return 0;
   }
   else
   {
       return 1;
   }
}

