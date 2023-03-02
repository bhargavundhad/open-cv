/*
 * sum_all.c
 *
 *  Created on: 27-Jan-2023
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
    printf("\n sum of all digits =%d",result);
  return 0;
}
int sum(int n)
{
	int sum=0,re;
	while(n>0)
	{
       re=n%10;
       sum=sum+re;
       n=n/10;
	}
	return sum;
}
