#include <stdio.h>

int main(){
	char letter = 0;

	scanf("%c", &letter);

	if(letter == 65 || letter == 69 || letter == 73 || letter == 79 || letter == 85 || letter == 89){
		printf("Tary dzaynavor e:");
	}
	else if(letter == 97 || letter == 101 || letter == 105 || letter == 111|| letter == 117 || letter == 121){
		printf("Tary dzaynavor e:");
	}
	else{
		printf("Tary bakhadzayn e:");
	}

return 0;
}
