/*
 * ptr_arm.c
 *
 *  Created on: 11-Feb-2023
 *      Author: root
 */
#include<stdio.h>
int arm(int);
int main()
{
	int n,result;
	printf("Enter the number =");
	scanf("%d",&n);

	result=arm(n);

	if(result==n)
	{
		printf("Given %d is Armstrong number ",n);
	}
	else
	{
		printf("Given %d is not Armstrong number ",n);
	}

 return 0;
}
int arm(int n)
{
    int n1,n2,i,count=0,sum,digit,pow;
    int *p1,*p2;

    n1=n;
    p1=&n1;
    while(*p1!=0)
    {
    	*p1=*p1/10;
    	count++;
    }
   // printf("Total number 0f digits =%d\n",count);

    n2=n;
    p2=&n2;
    sum=0;
    while(*p2!=0)
    {
       digit=*p2%10;
       pow=1;
       for(i=1;i<=count;i++)
       {
          pow=pow*digit;
       }
       sum=sum+pow;
       *p2=*p2/10;
    }
    return sum;
}
