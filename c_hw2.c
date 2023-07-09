#include <stdio.h>

int main(){

	int number1 = 0;
	int number2 = 0;
	
	printf("Mutqagrel arajin tivy: ");
	scanf("%d", &number1);
	printf("Mutqagrel erkrord tivy: ");
	scanf("%d", &number2);

	if(number1 > number2){
		printf("Amenamec tivn e ");
		printf("%d", number1);
	}
	else if(number1 < number2){
		printf("Amenamec tivn e ");
		printf("%d", number2);
	}
	else{
		printf("Mutqagrvac tvern havasar en:");
	}	
	

return 0;
}
