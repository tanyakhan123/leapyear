#include <stdio.h>
#include<cs50.h>
#include <math.h>



int year;

int main()

{

  printf("Enter a year: \n");

  scanf("%d", &year);



  if (year % 4 == 0)

    printf("%d is a leap year.\n", year);

  else if (year % 1 == 0)

    printf("%d isn't a leap year.\n", year);

  else

    printf("%d isn't a leap year.\n", year);



  return 0;

}