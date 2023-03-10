#include<stdio.h>
int valid(int *,int *,int *);
int main()
{
	int dd,mm,yy,result;
     char flight_name[100];

	printf("Enter the Date =");
	scanf("%d",&dd);
    printf("Enter the Month =");
    scanf("%d",&mm);
    printf("Enter the year =");
    scanf("%d",&yy);

    result=valid(&dd,&mm,&yy);
    if(result==0)
    {
    	   printf("\n no. flight name                      \t    timing  \n");
                printf("\n 1. Vistara               \t      9:45(A.M)        6:50(p.m)");
                printf("\n 2. IndiGo                \t      10:45(A.M)       7:50(p:m)");
                printf("\n 2. IndiGo                \t      8:45(A.M)        5:30(p:m)");
                printf("\n 3. AirIndia              \t      10:45(A.M)       6:35(p:m)");
                printf("\n 4. SpiceJet              \t      9:00(A.M)        9:45(p:m)");
                printf("\n 5. AirAsia               \t      10:30(A.M)       10:30(p:m)");
                printf("\n 6. GoAir                 \t      11:45(A.M)       11:00(p:m)");
                printf("\n 7. AirExpress            \t      9:45(A.M)        9:15(p:m)");
                printf("\n 8. AllianceAir           \t      9:15(A.M)        8:30(p:m)");
                printf("\n choose your flight as per as root := ");
                scanf("%s",flight_name);
    }
    else
    {
    	printf("Invalid Date");
    }
 return 0;
}
int valid(int *a, int *b,int *c)
{
  if(*a>=1 && *a<=31 && *b>=1 && *b<=12 && *c>=1900 && *c<=2030)
  {
     if(*c%4==0 && *b==2 && *a<=29)
     {
        return 0;
     }
     else if(*b==2 && *a<=28)
     {
    	 return 0;
     }
     else if((*b==1 || *b==3 || *b==5 || *b==7 || *b==9 || *b==11) && *a<=31)
     {
    	 return 0;
     }
     else if((*b==4 || *b==6 || *b==8 || *b==10 || *b==12) && *a<=30)
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
