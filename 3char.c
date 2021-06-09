#include<stdio.h>

int main(void){
	char caractere;

	printf("DIGITE UM CARACTERE: ");
	scanf("%c", &caractere);

	printf("CARACTERE: %c\n", caractere);
	printf("DECIMAL: %i\n", caractere);
	printf("HEXADECIMAL: %x\n", caractere);
	printf("OCTAL: %d\n", caractere);

	return 0;
}