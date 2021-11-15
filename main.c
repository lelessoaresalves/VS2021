#include <stdio.h>
#include <stdlib.h>
#include "poi.h" 
/*
	*possue apenas uma função poi(int) 
	*que retonra 1 para numeros impares e 0 para numeros
*/
int main() {
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	if (poi(n))
		printf("\t->O numero %d eh impar\n\n");
	else 
		printf("\t->O numero %d eh par\n\n");
	
	return 0;

}