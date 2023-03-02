/*
 * plyer.c
 *
 *  Created on: 31-Jan-2023
 *      Author: root
 */
#include<stdio.h>
#define size 3
struct cricket
{
   char p_name[50];
   char t_name[60];
   int  avg;
};
int main()
{
   struct cricket s1[size];

   int i,j,temp;
   char ch[50],ch1[50];
   for(i=0;i<size;i++)
   {
      printf("Enter Player name =");
      scanf("%s",s1[i].p_name);
      printf("Enter team name =");
      scanf("%s",s1[i].t_name);
      printf("Enter player average =");
      scanf("%d",&s1[i].avg);
   }
   printf("\n");
   printf("Name\tT_name\tAverage\n");
   for(i=0;i<size;i++)
   {
	   printf("%s\t%s\t%d\n",s1[i].p_name,s1[i].t_name,s1[i].avg);
   }
   printf("\n");

   for(i=0;i<size;i++)
   {
      for(j=i+1;j<size;j++)
      {
       	 if(strcmp(s1[i].t_name,s1[j].t_name)>0)
       	 {
              strcpy(ch,s1[i].t_name);
              strcpy(s1[i].t_name,s1[j].t_name);
              strcpy(s1[j].t_name,ch);

              strcpy(ch1,s1[i].p_name);
              strcpy(s1[i].p_name,s1[j].p_name);
              strcpy(s1[j].p_name,ch1);

              temp=s1[i].avg;
              s1[i].avg=s1[j].avg;
              s1[j].avg=temp;
         }
      }
   }
   printf("\n");

   printf("Name\tT_name\tAverage\n");
    for(i=0;i<size;i++)
    {
   	  printf("%s\t%s\t%d\n",s1[i].p_name,s1[i].t_name,s1[i].avg);
    }
   printf("\n");
 return 0;
}

