/*
 * date.c
 *
 *  Created on: 25-Jan-2023
 *      Author: root
 */
#include<stdio.h>
struct date
{
	int d,d1;
	int m,m1;
	int y,y1;
};
void date(struct date);
int main()
{
	struct date s1;
   printf("Enter the Birthday year =");
   scanf("%d",&s1.y);
   printf("Enter the Birthday Month =");
   scanf("%d",&s1.m);
   printf("Enter the Birthday Date =");
   scanf("%d",&s1.d);
   printf("Enter the current year =");
   scanf("%d",&s1.y1);
   printf("Enter the current month =");
   scanf("%d",&s1.m1);
   printf("Enter the current date =");
   scanf("%d",&s1.d1);
 return 0;
}
void date(struct date s1)
{
	if(s1.d>s1.d1)
	{
      s1.m=s1.m-1;

	}

}
