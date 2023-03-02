/*
 * arm_st.c
 *
 *  Created on: 28-Jan-2023
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

    n1=n;
    while(n1!=0)
    {
    	n1=n1/10;
    	count++;
    }
    printf("Total number 0f digits =%d\n",count);

    n2=n;
    sum=0;
    while(n2!=0)
    {
       digit=n2%10;
       pow=1;
       for(i=1;i<=count;i++)
       {
          pow=pow*digit;
       }
       sum=sum+pow;
       n2=n2/10;
    }
    return sum;
}

