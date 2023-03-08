#include <stdio.h>
#include <string.h>
#include <ctype.h>
void welcome();
int main()
{
  welcome();

  char username[100], password[20], us[100];
  int i;
  int upper = 0, lower = 0, digit = 0;

  printf("Login app:- \n");

  printf("Enter username =");
  scanf("%s", username);

 
  for (i = 0; i < strlen(username); i++)
  {
    us[i] = username[i];
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
  return 0;
}
void welcome()
{
  printf("WELCOME TO AIRLINE BOOKING APP\n\n");
}