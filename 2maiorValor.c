#include<stdio.h>

int main(void){

	int nums[3];
	int maiorNumero= 0;

	for(int i = 0; i<3; i++){
		printf("DIGITE O VALOR NUMERICO: ");
		scanf("%i", &nums[i]);
	}

	for(int index = 0; index<3; index++)
		if(nums[index] > maiorNumero) maiorNumero = nums[index];

	printf("O MAIOR VALOR DIGITADO E: %i", maiorNumero);

	return 0;
}