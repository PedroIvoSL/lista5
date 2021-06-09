#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tresNumeros[3], substituir, index, i, k;


	for(int i = 0; i< 3; i++){
		printf("DIGITE O NUMERO %i: ",i+1);
		scanf("%i", &tresNumeros[i]);
	}

	for(int index = 0; index<3;index++){
		for(int k = index+ 1; k<3; k++){
			if(tresNumeros[index] > tresNumeros[k]){
				substituir = tresNumeros[index];
				tresNumeros[index] = tresNumeros[k];
				tresNumeros[k] = substituir;
			}
		}
	}
	printf("NUMEROS ORDENADOS: ");
	for(int num = 0; num<2;num++){
		printf("%i, ", tresNumeros[num]);
	}
	printf("%i", tresNumeros[2]);
}