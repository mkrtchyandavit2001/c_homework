#include <stdio.h>

int main (){
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    
    printf("Mutqarel arajin tivy: ");
    scanf("%d", &number1);
    printf("Mutqagrel erkrord tivy: ");
    scanf("%d", &number2);
    printf("Mutqagrel errord tivy: ");
    scanf("%d", &number3);
    
    if(number2 == number3 && number2 < number1){
        printf("Amenamec tivn e ");
        printf("%d", number1);
    }
    else if(number1 == number3 && number1 < number2){
        printf("Amenamec tivn e ");
        printf("%d", number2);
    }
    else if(number1 == number2 && number1 < number3){
        printf("Amenamec tivn e ");
        printf("%d", number3);
    }
    else{
        printf("Texi e unecel sxal:");
    }
    
return 0;    
}

