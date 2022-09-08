#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter any number  : ");
    scanf("%d", &a);
    if (a==1 || a==2 || a==3 || a==5 || a==7  )
    {
        printf("Your number is Prime : %d", a);
    }
    else if (a==49)
    {
        printf("Your Number is Not Prime");
        
    }
    
    else if (a % 2 != 0 && a % 3 != 0 && a % 5 != 0 )
    {
        printf("Your number is Prime : %d", a);
    }
    else
    {
        printf("Your number is not Prime : %d", a);
    }

    return 0;
}