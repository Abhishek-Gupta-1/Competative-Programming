#include<stdio.h>

int main(){
    // 97-122 = a-z ASCII Values
    char ch;
    printf("Enter the character (ONLY ALPHABETS) \n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("It is lowercase");
    }
    else{
        printf("It is UpperCase");
    }
    return 0;
}