#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
     printf("Enter Year :");
     scanf("%d", &a);
     if ((a%4==0)&&(a%400==0))
     {
          printf(" This is a Leap year : %d", a);
     }

     else
     {
          printf("This is not a Leap year : %d", a);
     }

     return 0;
}