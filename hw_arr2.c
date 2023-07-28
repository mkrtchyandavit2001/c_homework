#include <stdio.h>

int main(){

	int index = 0;
	
	printf("Mutqagrel zangvaci erkarutyuny: ");
	scanf("%d", &index);

	char arr[index];
	
	printf("Mutqagrel zangvaci arjeqnery: ");
	for(int i = 0; i < index; ++i){
		scanf("%c\n", &arr[i]);
	}
	
	printf("Zangvaci hakarak hertakanutyunn e: ");	
	for(int i = index - 1; i > 0; --i){
		printf("%c\n ", arr[i]);
	}


return 0;
}
