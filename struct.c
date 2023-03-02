/*
 * struct.c
 *
 *  Created on: 18-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
#define size 10
struct Census
{
    char city[30];
    int population,listrecy;
};
int main()
{
   struct Census s1[size];
   int i,j,temp,temp1;
   char ch[30];
   for(int i=0;i<size;i++)
   {
      printf("Enter the city name =");
      scanf("%s",s1[i].city);
      printf("Enter the population of the city =");
      scanf("%d",&s1[i].population);
      printf("Enter the literacy level =");
      scanf("%d",&s1[i].listrecy);
   }
 printf("\n");

 printf("1.read details for 10 city\n");
   for(i=0;i<size;i++)
   {
     printf("City name =%s\n",s1[i].city);
   }
 printf("\n");

   for(i=0;i<size;i++)
   {
     for(j=i+1;j<size;j++)
     {
    	 if(strcmp(s1[i].city,s1[j].city)>0)
    	 {
            strcpy(ch,s1[i].city);
            strcpy(s1[i].city,s1[j].city);
            strcpy(s1[j].city,ch);
    	 }
     }
   }
   printf("2.sort the list alphabetically\n");
   for(i=0;i<size;i++)
   {
	   printf("%s\n",s1[i].city);
   }
   printf("\n");

    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
       {
    	   if(s1[i].listrecy > s1[j].listrecy)
    	   {
               temp=s1[i].listrecy;
               s1[i].listrecy=s1[j].listrecy;
               s1[j].listrecy=temp;
    	   }
       }
    }

    printf("3.sort the list based on literacy level\n");
    for(i=0;i<size;i++)
    {
       printf("%d\n",s1[i].listrecy);
    }
    printf("\n");

    for(i=0;i<size;i++)
       {
          for(j=i+1;j<size;j++)
          {
       	     if(s1[i].population > s1[j].population)
       	     {
                  temp1=s1[i].population;
                  s1[i].population=s1[j].population;
                  s1[j].population=temp1;
       	     }
          }
       }

    printf("4. sort the list based on population\n");
    for(i=0;i<size;i++)
    {
    	printf("%d\n",s1[i].population);
    }
    printf("\n");

    printf("5.display sorted list\n\n");
    printf("City\t Population\t literacy\n");

    for(i=0;i<size;i++)
    {
       printf("%s\t\t %d\t %d\n",s1[i].city,s1[i].population,s1[i].listrecy);
    }
    printf("\n");
  return 0;
}

