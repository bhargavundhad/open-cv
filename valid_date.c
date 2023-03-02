/*
 * valid_date.c
 *
 *  Created on: 25-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int valid(int,int,int);
int main()
{
	int dd,mm,yy,result;

	printf("Enter the Date =");
	scanf("%d",&dd);
    printf("Enter the Month =");
    scanf("%d",&mm);
    printf("Enter the year =");
    scanf("%d",&yy);

    result=valid(dd,mm,yy);
    if(result==0)
    {
    	printf("Valid Date");
    }
    else
    {
    	printf("Invalid Date");
    }
 return 0;
}
int valid(int a, int b,int c)
{
  if(a>=1 && a<=31&& b>=1 && b<=12 && c>=1900 && c<=2030)
  {
     if(c%4==0 && b==2 && a<=29)
     {
        return 0;
     }
     else if(b==2 && a<=28)
     {
    	 return 0;
     }
     else if((b==1 || b==3 || b==5 ||b==7 || b==9 || b==11) && a<=31)
     {
    	 return 0;
     }
     else if(b==4 || b==6 || b==8 || b==10 || b==12)
     {
    	 return 0;
     }
  }
  else
  {
     return 1;
  }
  return 1;
}
