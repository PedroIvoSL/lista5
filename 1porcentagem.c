#include <stdio.h>

int main(void){
	float percentual;

	while(percentual){
		printf("DIGITE O VALOR PERCENTUAL: ");
		scanf("%f", &percentual);
		if(percentual <= 100 && percentual >= 0) break;
		else printf("VALOR INVALIDO! DIGITE UM VALOR ENTRE 0 E 100!\n");
	}
	float resultado = percentual * 555 / 100;
	printf("%.2lf%% DE 555 E: %.2lf", percentual, resultado);

	return 0;
}