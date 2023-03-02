/*
 * containing.c
 *
 *  Created on: 25-Jan-2023
 *      Author: root
 */
#include<stdio.h>
struct mystruct
{

   int hour;
   int min;
   int second;
};
void display(struct mystruct);
//void input(struct mystruct s1)
//{
//   printf("Enter Hour =");
//   scanf("%d",&s1.hour);
//   printf("Enter Minute =");
//   scanf("%d",&s1.min);
//   printf("Enter Second =");
//   scanf("%d",&s1.second);
//}
//void display(struct mystruct s1)
//{
//   printf("Hour =%d\n",s1.hour);
//   printf("Minute =%d\n",s1.min);
//   printf("Second =%d\n",s1.second);
//}
int validate(struct  mystruct);
int main()
{
	struct mystruct s1;
    int result;

//	input(s1);
	 printf("Enter Hour =");
	   scanf("%d",&s1.hour);
	   printf("Enter Minute =");
	   scanf("%d",&s1.min);
	   printf("Enter Second =");
	   scanf("%d",&s1.second);
	   printf("\n");
//	printf("Hour =%d\n",s1.hour);
//	 printf("Minute =%d\n",s1.min);
//	   printf("Second =%d\n",s1.second);
    display(s1);
    result=validate(s1);
    printf("\n");
    if(result==0)
    {
    	printf("Valid Time");
    }
    else
    {
    	printf("Invalid Time");
    }
  return 0;
}
//void input(struct mystruct s1)
//{
//   printf("Enter Hour =");
//   scanf("%d",&s1.hour);
//   printf("Enter Minute =");
//   scanf("%d",&s1.min);
//   printf("Enter Second =");
//   scanf("%d",&s1.second);
//}
void display(struct mystruct s1)
{
   printf("Hour =%d\n",s1.hour);
   printf("Minute =%d\n",s1.min);
   printf("Second =%d\n",s1.second);
}
int validate(struct mystruct s1)
{
   if(s1.hour>=1 && s1.hour<=24 && s1.min>=1 && s1.min<=60 && s1.second>=1 && s1.second<=60)
   {
	  return 0;
   }
   else
   {
      return 1;
   }
}

