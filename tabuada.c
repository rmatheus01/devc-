#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i;
	
	printf("Tabuada de multiplica��o do n�mero: 2 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i x %i = %i \n", 2, i, 2*i);
	}
	
		printf("Tabuada de multiplica��o do n�mero: 5 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i X %i = %i \n", 5, i, 5*i);
    }
    
    	printf("Tabuada de multiplica��o do n�mero: 7 \n");
	for (i = 1; i <= 10; i++) {
		printf("%i X %i = %i \n", 7, i, 7*i); 
		
	}
	return 0;
}
