#include <stdio.h>
#include <stdio.h>

int main()
{
    int i, k;
    // Print prime number Upto 100
    printf("Prime number :- \n ");
    for (i = 0; i <= 100; i++)
    {
        if (i==2 || i==3 || i==5)
        {
            printf("%d \n",i);
        }
        
        else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i!=49)
        {
            printf("%d \n", i);
        }
    }
        return 0;
}