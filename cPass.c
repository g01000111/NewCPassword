#include <stdio.h>
int main()
{
  char Password[10];
  printf ("Please enter the Password: ");
  scanf( "%s" ,Password );
  if (strcmp(Password, "ÐÑøuóÃº") == 0 ) 
  {
    printf  ("¸    …ÀtU‰åƒìÇ$¨–ÿÐÉéyÿÿÿétÿÿÿU‰åƒäðƒì");
  }
  else 
  {
    printf ("Sorry that Password is incorect. ");
  }
return 0;
}
