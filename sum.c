/*
 * sum.c
 *
 *  Created on: 20-Jan-2023
 *      Author: root
 */
#include<stdio.h>
int sum(int);
int main()
{
	int a,result;
	printf("Enter the number =");
	scanf("%d",&a);
	result=sum(a);
    printf("%d",result);
  return 0;
}
int sum(int n1)
{
   int sum=0,r;
	 while(n1>0)
	 {
        r=n1%10;
        sum+=r;
	    n1=n1/10;
	 }
   return sum;
}

