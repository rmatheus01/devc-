#include <stdio.h>
#include <locale.h>

void verificarPositivoOuNegativo(numero) {
	if (numero == 0) {
		printf("Zero � neutro.");
	} else if (numero > 0) {
		printf("Positivo.");
	} else {
		printf("Negativo.");
	}
}

int main() {
	setlocale(LC_ALL, "");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scarf("%i" ,&numero);
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
}


