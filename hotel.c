/*
 * hotel.c
 *
 *  Created on: 03-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
#define size 2
struct hotel
{
    char h_name[50],h_addres[100],h_grade[10];
    int h_charges,h_room;
};
void grade1(struct hotel s1[size]);
void grade2(struct hotel s1[size]);
int main()
{
	struct hotel s1[size];

	int i;
	for(i=0;i<size;i++)
	{
      printf("Enter the hotel name =");
      scanf("%s",s1[i].h_name);
      printf("Enter the hotel address =");
      scanf("%s",s1[i].h_addres);
      printf("Enter the hotel grade =");
      scanf("%s",s1[i].h_grade);
      printf("Enter the hotel room charges =");
      scanf("%d",&s1[i].h_charges);
      printf("Enter the total number of room =");
      scanf("%d",&s1[i].h_room);
      printf("\n\n");
	}

	printf("Name\t address\t\t grade\t charges\t room\n");
	for(i=0;i<size;i++)
	{
		printf("%s\t %s\t %s\t %d\t %d\n",s1[i].h_name,s1[i].h_addres,s1[i].h_grade,s1[i].h_charges,s1[i].h_room);
	}
	printf("\n");

	grade1(s1);
	grade2(s1);
 return 0;
}
void grade1(struct hotel s1[size])
{
	int i;
	char ch[50];

	printf("Enter the grade =");
	scanf("%s",ch);

	printf("Name\t address\t\t grade\t charges\t room\n");
	for(i=0;i<size;i++)
	{
      if(strcmp(s1[i].h_grade,ch)==0)
      {
         printf("%s\t %s\t %s\t %d\t %d\n",s1[i].h_name,s1[i].h_addres,s1[i].h_grade,s1[i].h_charges,s1[i].h_room);
      }
	}
	printf("\n");
}
void grade2(struct hotel s1[size])
{
	int i,temp;

	printf("Enter the room charges =");
	scanf("%d",&temp);

	printf("Name\t address\t\t grade\t charges\t room\n");
		for(i=0;i<size;i++)
		{
	      if(s1[i].h_charges>temp)
	      {
	         printf("%s\t %s\t %s\t %d\t %d\n",s1[i].h_name,s1[i].h_addres,s1[i].h_grade,s1[i].h_charges,s1[i].h_room);
	      }
		}
	printf("\n");
}
