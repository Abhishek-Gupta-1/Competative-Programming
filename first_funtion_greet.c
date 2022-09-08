#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    
    
     return 0;
}
void goodmorning(){
    printf("Very Goodmorning to You \n");
    goodafternoon();
}

void goodafternoon(){
    printf("Very goodafternoon to You \n");
    goodnight();
} 
void goodnight(){
    printf("Very goodnight to You \n");
}
  
