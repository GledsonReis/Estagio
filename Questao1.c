#include <stdio.h>

int main(){
	
	float custoFabrica = 10000.00;
	float percentDistrib = 0.28;
	float percentImpostos  = 0.45;
	float custoFinal = custoFabrica + (custoFabrica * percentDistrib) + (custoFabrica * percentImpostos);

	printf("Custo de fabricação: %.2f", custoFinal);
	
	return 0;
}
