#include <stdio.h>

int main(){

	int year = 0;
	printf("Mutqagrel taarin: ");
	scanf("%d", &year);

	if(year % 4 == 0){
		printf("Nahanj tari e:");
	}
	else{
		printf("Nahanj tari che:");
	}

return 0;
}
