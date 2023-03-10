#include <stdio.h>
#include <string.h>
#include <ctype.h>
void welcome();
int main()
{
  welcome();

  char username[100], password[20], us[100], email[150];
  int i, ch, ch1;
  int upper = 0, lower = 0, digit = 0;

  printf("Login for app:- \n");

  do
  {
    printf("1.continue with E-mail\n");
    printf("2.Google\n");
    printf("3.Create New Account\n");
    printf("\n");

    printf("Enter choice number =");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
      printf("Enter Email id =");
      scanf("%s", email);

      for (i = 0; i < strlen(email); i++)
      {
        us[i] = email[i];
      }
      us[i] = '\0';
      printf("\n");

    pass:
      printf("Enter password (include must be uppercase,lowercase,numeric) =");
      scanf("%s", password);

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
        if (strcmp(username, us) == 0)
        {
          printf("\n Loging is successful\n");
        }
      }
      else
      {
        printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
        goto pass;
      }
      break;

    case 2:
      printf("Enter username =");
      scanf("%s", username);

      for (i = 0; i < strlen(username); i++)
      {
        us[i] = username[i];
      }
      us[i] = '\0';
      printf("\n");

    pas:
      printf("Enter password (include must be uppercase,lowercase,numeric) =");
      scanf("%s", password);

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
        if (strcmp(username, us) == 0)
        {
          printf("\n Loging is successful\n");
        }
      }
      else
      {
        printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
        goto pas;
      }
      break;

    case 3:
      printf("Enter username =");
      scanf("%s", username);

      for (i = 0; i < strlen(username); i++)
      {
        us[i] = username[i];
      }
      us[i] = '\0';
      printf("\n");

    pss:
      printf("Enter password (include must be uppercase,lowercase,numeric) =");
      scanf("%s", password);

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
        if (strcmp(username, us) == 0)
        {
          printf("\n Loging is successful\n");
        }
      }
      else
      {
        printf("\n Incoreect Password! (include must be uppercase,lowercase,numeric) \n");
        goto pss;
      }
      break;
    }
    printf("1.Submit\n");
    printf("2.Back\n");
    scanf("%d", &ch1);
  }
  while (ch1 == 2);

 return 0;
}
void welcome()
{
  printf("WELCOME TO AIRLINE BOOKING APP\n\n");
}
