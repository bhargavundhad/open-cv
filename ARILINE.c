#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct flight 
{
  char state[20];
  char city[20];
};
struct customer
{
   int id;
   char name[50];
   struct flight f[28];
   struct flight f1[44];
}s1;

void login();
void customer(struct customer s1);
void city_state(struct customer s1);
void state_s(struct customer s1);
void city_c(struct customer s1);
int avlid(int);

int main()
{
    // struct customer s1;
    customer(s1);
    login();
    city_state(s1);
}
void customer(struct customer s1)
{
    FILE *f1;
 
    f1=fopen("customers.txt","w");
    printf("Enter customer name =");
    scanf("%s",s1.name);

    printf("Enter customer id =");
    scanf("%d",&s1.id);

    fwrite(&s1,sizeof(s1),1,f1);
    fclose(f1);
    printf("\n");
}
void login()
{
    FILE *f2;
    FILE *f3;

    char username[100], password[20];
    int i, ch, ch1;
    int upper = 0, lower = 0, digit = 0;

    printf("Login for app:- \n");

    printf("1.Google\n");
    printf("2.Create New Account\n");
    printf("\n");

    printf("Enter choice number =");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        f2 = fopen("login.txt", "w");

        printf("Enter username =");
        scanf("%s", username);
        fwrite(&username, sizeof(username), 1, f2);

        fclose(f2);
        printf("\n");

    pas:
        f3 = fopen("login1.txt", "w");

        printf("Enter password (include must be uppercase,lowercase,numeric) =");
        scanf("%s", password);
        fwrite(&password, sizeof(password), 1, f3);

        fclose(f3);

        for (i = 0; i < strlen(password); i++)
        {
            if (islower(password[i]))
            {
                lower++;
            }
            else if (isupper(password[i]))
            {
                upper++;
            }
            else if (isdigit(password[i]))
            {
                digit++;
            }
        }

        if (lower != 0 && upper != 0 && digit != 0)
        {
            printf("\n Loging is successful\n");
        }
        else
        {
            printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
            goto pas;
        }
        break;

    case 2:
        f2 = fopen("login.txt", "w");
        printf("Enter username =");
        scanf("%s", username);
        fwrite(&username, sizeof(username), 1, f2);
        fclose(f2);
        printf("\n");

    pss:
        f3 = fopen("login1.txt", "w");
        printf("Enter password (include must be uppercase,lowercase,numeric) =");
        scanf("%s", password);
        fwrite(&password, sizeof(password), 1, f3);
        fclose(f3);

        for (i = 0; i < strlen(password); i++)
        {
            if (islower(password[i]))
            {
                lower++;
            }
            else if (isupper(password[i]))
            {
                upper++;
            }
            else if (isdigit(password[i]))
            {
                digit++;
            }
        }

        if (lower != 0 && upper != 0 && digit != 0)
        {
            printf("\n Loging is successful\n");
        }
        else
        {
            printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
            goto pss;
        }
        break;
    }
}
void city_state(struct customer s1)
{
    int ch;

  strcpy(s1.f[0].state,"Andhra Pradesh");
  strcpy(s1.f[1].state,"Assam");
  strcpy(s1.f[2].state,"Bihar");
  strcpy(s1.f[3].state,"Chhattisgrah");
  strcpy(s1.f[4].state,"New Delhi");
  strcpy(s1.f[5].state,"Goa");
  strcpy(s1.f[6].state,"Gujarat");
  strcpy(s1.f[7].state,"Haryana");
  strcpy(s1.f[8].state,"Jammu and Kashmir");
  strcpy(s1.f[9].state,"Jharkhand");
  strcpy(s1.f[10].state,"Karnataka");
  strcpy(s1.f[11].state,"Kerala");
  strcpy(s1.f[12].state,"Madhya Pradesh");
  strcpy(s1.f[13].state,"Maharashtra");
  strcpy(s1.f[14].state,"Odisha");
  strcpy(s1.f[15].state,"Punjab");
  strcpy(s1.f[16].state,"Rajasthan");
  strcpy(s1.f[17].state,"Tamil Nadu");
  strcpy(s1.f[18].state,"Himachal Pradesh");
  strcpy(s1.f[19].state,"Daman and Diu");
  strcpy(s1.f[20].state,"Arunachal Pradesh");
  strcpy(s1.f[22].state,"Bihar");
  strcpy(s1.f[23].state,"Andaman and Nicobar Islands");
  strcpy(s1.f[24].state,"Uttar Pradesh");
  strcpy(s1.f[25].state,"Telangana");
  strcpy(s1.f[26].state,"West Bengal");
  strcpy(s1.f[27].state,"Uttarakhand");


//city
  strcpy(s1.f1[0].city,"Port Blair");
  strcpy(s1.f1[1].city,"Triputi");
  strcpy(s1.f1[2].city,"Pasighat");
  strcpy(s1.f1[3].city,"Raipur");
  strcpy(s1.f1[4].city,"Diu");
  strcpy(s1.f1[5].city,"New Delhi");
  strcpy(s1.f1[6].city,"Tezpur");
  strcpy(s1.f1[7].city,"Rajkot");
  strcpy(s1.f1[8].city,"Surat");
  strcpy(s1.f1[9].city,"Karnal");
  strcpy(s1.f1[10].city,"Shimla");
  strcpy(s1.f1[11].city,"Jammu");
  strcpy(s1.f1[12].city,"Jamshedpur");
  strcpy(s1.f1[12].city,"Ranchi");
  strcpy(s1.f1[13].city,"Mysore");
  strcpy(s1.f1[14].city,"Agatti");
  strcpy(s1.f1[15].city,"Satna");
  strcpy(s1.f1[16].city,"Indore");
  strcpy(s1.f1[17].city,"Nashik");
  strcpy(s1.f1[18].city,"Mumbai");
  strcpy(s1.f1[19].city,"Shilong");
  strcpy(s1.f1[20].city,"Aizawl");
  strcpy(s1.f1[21].city,"Dimapur");
  strcpy(s1.f1[22].city,"Jeypore");
  strcpy(s1.f1[23].city,"Pondichery");
  strcpy(s1.f1[24].city,"Ludhiana");
  strcpy(s1.f1[25].city,"Patiala");
  strcpy(s1.f1[26].city,"Kota");
  strcpy(s1.f1[27].city,"Gangtok");
  strcpy(s1.f1[28].city,"Salem");
  strcpy(s1.f1[29].city,"Hydrabad");
  strcpy(s1.f1[30].city,"Agartala");
  strcpy(s1.f1[31].city,"Agra");
  strcpy(s1.f1[32].city,"Pantnagr");
  strcpy(s1.f1[33].city,"Behala");
  strcpy(s1.f1[34].city,"Cooch Behar");
  strcpy(s1.f1[35].city,"Panagarh");
  strcpy(s1.f1[36].city,"Kolhapur");
  strcpy(s1.f1[37].city,"Belgaum");
  strcpy(s1.f1[38].city,"Bhavnagar");
  strcpy(s1.f1[39].city,"Bokaro");
  strcpy(s1.f1[40].city,"satna");
  strcpy(s1.f1[41].city,"Kullu");
  strcpy(s1.f1[42].city,"Jeypore");
  strcpy(s1.f1[43].city,"Pathankot");

  printf("\n1.for state to state destination");
  printf("\n");
  printf("\n2.for city to city(one state)");

  printf("\n");
  printf("\nenter your choice according to your wish= ");
  scanf("%d",&ch);

  switch(ch)
  {
    case 1:
            state_s(s1);
            break;

    case 2:
            city_c(s1);
            break;
           
  }
}
void state_s(struct customer s1)
{
    FILE *f4;
    FILE *f5;

    char str_from[20],str_to[20];
    int from=0,to=0;

           rechoice:
           printf("\n");
           printf("\nAndhra Pradesh \nAssam \nBihar \nChhattisgrah \nNew Delhi \nGoa \nGujarat \nHaryana \nJammu and Kashmir \nJharkhand \nKarnataka \nKerala \nMadhya Pradesh \nMaharashtra \nOdisha \nPunjab \nRajasthan \nTamil Nadu \nHimachal Pradesh \nDaman and Diu \nArunachal Pradesh \nBihar \nAndaman and Nicobar Islands \nUttar Pradesh \nTelangana \nWest Bengal \nUttarakhand");

           printf("\n");
           f4=fopen("state.txt","w");
           printf("\nenter the departure destination= ");
           scanf("%s",str_from);
           fwrite(&str_from,sizeof(str_from),1,f4);
           fclose(f4);

           printf("\n");
           f5=fopen("state.txt","w");
           printf("\nenter the final destination= ");
           scanf("%s",str_to);
           fwrite(&str_to,sizeof(str_to),1,f5);
           fclose(f5);

          if(str_from!=NULL)
          {
              for(int i=0;i<28;i++)
              {
                  if(strcmp(s1.f[i].state,str_from)!=0)
                  {
                     from++;
                  }
              }
          }
          
         if(from==28)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your departure destination=%s \n",str_from);
         }
          
         /////
         if(str_to!=NULL)
          {
              for(int i=0;i<28;i++)
              {
                  if(strcmp(s1.f[i].state,str_to)!=0)
                  {
                     to++;
                  }
              }
          }
          
          
         if(to==28)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your final destination=%s \n",str_to);
         }
}
void city_c(struct customer s1)
{
   char str_from[20],str_to[20];
   int from=0,to=0;

     rechoice:
           printf("\n");
           printf("\nPort Blair || Triputi || Pasighat \nRaipur || Diu || New Delhi \nTezpur || Rajkot || Surat \nKarnal || Shimla || Jammu \nJamshedpur || Ranchi || Mysore \nAgatti || Satna || Indore \nNashik || Mumbai || Shilong || Aizawl \nDimapur || Jeypore || Pondichery \nLudhiana || Patiala || Kota \nGangtok || Salem || Hydrabad \nAgartala || Agra || Pantnagr \nBehala || Cooch Behar || Panagarh \nKolhapur || Belgaum || Bhavnagar \nBokaro || satna || Kullu \nJeypore || Pathankot");
           printf("\n");
           printf("\nenter the departure destination= ");
           scanf("%s",str_from);

           printf("\n");
           printf("\nenter the final destination= ");
           scanf("%s",str_to);

          if(str_from!=NULL)
          {
              for(int i=0;i<44;i++)
              {
                  if(strcmp(s1.f1[i].city,str_from)!=0)
                  {
                     from++;
                  }
              }
          }
          
         if(from==44)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your departure destination=%s \n",str_from);
         }
          
         /////
         if(str_to!=NULL)
          {
              for(int i=0;i<44;i++)
              {
                  if(strcmp(s1.f1[i].city,str_to)!=0)
                  {
                     to++;
                  }
              }
          }
          
         if(to==44)
         {
             printf("\n");
             printf("\nyou have inserted wrong infformation");
             goto rechoice;
         }
         else
         {
             printf("\n");
             printf("your final destination=%s \n",str_to);
         }
}
int avlid(int id)
{
   FILE *f8;

   int c=0;
   f8=fopen("customers.txt","r");
   while(!feof(f8))
   {
      fread(&s1,sizeof(s1),1,f8);
      if(id==s1.id)
      {
         fclose(f8);
         return 1;
      }
   }
   fclose(f8);
   return 0;
}
