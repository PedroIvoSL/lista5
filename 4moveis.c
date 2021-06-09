#include<stdio.h>

int main(void){
	int codigo;

	printf("DIGITE O CODIGO DO PRODUTO QUE VOCE DESEJA COMPRAR : ");
	scanf("%i", &codigo);

		switch(codigo){
			case 1: printf("Cadeira"); break;
			case 2: printf("Mesa de computador"); break;
			case 3: printf("Estante de livros"); break;
			case 4: printf("Mesa de impressora"); break;
			case 5: printf("Estante de CD"); break;
			default: printf("Móvel não está disponível, tente novamente...");
		}
	return 0;
}