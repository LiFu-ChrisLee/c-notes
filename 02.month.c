#include <stdio.h>

char *get_str_month(int month);

int main(int argc, char const *argv[])
{
  int month = -1;
  printf("Please input month number: ");
  scanf("%d", &month);

  if (month < 1 || month > 12)
  {
    printf("Your input month is invalid!\n");
  }
  else
  {
    printf("Your input month is: %s.\n", get_str_month(month));
  }

  return 0;
}

char *get_str_month(int month)
{
  char *MONTH[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  return MONTH[month - 1];
}
