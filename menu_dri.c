/*
 * menu_dri.c
 *
 *  Created on: 01-Feb-2023
 *      Author: root
 */
#include<stdio.h>
#include<string.h>
#define size 2
struct library
{
   int acce_num,price,issue;
   char tit_name[50],auth_name[50];
};
int main()
{
	struct library s1[size];

	int choice,choice1,i,j,count=0,temp;
	char ch[30],ch1[40];

	do
	{
		printf("1.Add book information\n");
		printf("2.Display book information\n");
		printf("3.List all books of given author\n");
		printf("4.List the title of specified book\n");
		printf("5.List total no. of books in the library\n");
		printf("6.List the books in the order of accession number\n");
		printf("7.Exit\n");

		printf("Enter the choice =");
		scanf("%d",&choice);

	   switch(choice)
	   {
	     case 1:
            for(i=0;i<size;i++)
		    {
                printf("Enter the book accession number =");
                scanf("%d",&s1[i].acce_num);
                printf("Enter the book title number = ");
                scanf("%s",s1[i].tit_name);
                printf("Enter the book author name =");
                scanf("%s",s1[i].auth_name);
                printf("Enter the book price =");
                scanf("%d",&s1[i].price);
                printf("Enter the book issued number =");
                scanf("%d",&s1[i].issue);
		    }
            printf("\n");
            break;

	     case 2:
	    	 printf("ac_num\t title\t author\t price\t issued\n");

	    	 for(i=0;i<size;i++)
	    	 {
                printf("%d\t %s\t %s\t %d\t %d\n",s1[i].acce_num,s1[i].tit_name,s1[i].auth_name,s1[i].price,s1[i].issue);
	    	 }
	    	  printf("\n");
	          break;

	     case 3:
	    	 printf("Enter the book author =");
	    	 scanf("%s",ch);

	    	 printf("ac_num\t title\t author\t price\t issued\n");
	    	 for(i=0;i<size;i++)
	    	 {
	    		 if(strcmp(s1[i].auth_name,ch)==0)
	    		 {
	    			 printf("%d\t %s\t %s\t %d\t %d\n",s1[i].acce_num,s1[i].tit_name,s1[i].auth_name,s1[i].price,s1[i].issue);
	    		 }
	    	 }
	    	  printf("\n");
	          break;

	     case 4:
              printf("Enter the book title =");
              scanf("%s",ch1);

              printf("ac_num\t title\t author\t price\t issued\n");
              for(i=0;i<size;i++)
              {
              	   if(strcmp(s1[i].tit_name,ch)==0)
              	   {
              		 printf("%d\t %s\t %s\t %d\t %d\n",s1[i].acce_num,s1[i].tit_name,s1[i].auth_name,s1[i].price,s1[i].issue);
              	   }
              }
              printf("\n");
              break;

	     case 5:
             for(i=0;i<size;i++)
             {
            	 count++;
             }
             printf("%d",count);
             printf("\n");
             break;

	     case 6:
	    	 printf("Enter the book issued number  =");
	     	 scanf("%d",&temp);

	      	   for(i=0;i<size;i++)
	           {
	    	 		 if(strcmp(s1[i].auth_name,temp)==0)
	    	 	     {
	    	              printf("%d\n",s1[i].issue);
	    	 	   	 }
	    	   }
	    	   printf("\n");
	    	   break;
	     case 7:
               printf("Exit\n");
               break;
	   }
	   printf("if continue this menu drive plaese enter 0 =");
	   scanf("%d",&choice1);
	}
	while(choice1==0);
}

