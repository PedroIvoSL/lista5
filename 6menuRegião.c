#include <stdio.h>
#include <stdlib.h>

int main(void){
    int opcao;

    printf("******************************MENU*****************************\n");
    printf("*** DIGITE O NUMERO DA REGIAO QUE VOCE GOSTARIA DE CONHECER ***\n");
    printf("***************************************************************\n\n");
    printf("[1] - Norte\n");
    printf("[2] - Nordeste\n");
    printf("[3] - Centro-Oeste\n");
    printf("[4] - Sudeste\n");
    printf("[5] - Sul\n");
    printf("[0] - Finalizar!\n");
    scanf("%i", &opcao);
    getch();
    system("cls");
    do{
    switch (opcao)
    {
    case 1:
        printf ("\nVOCE ESCOLHEU A REGIAO NORTE!\n");
        break;
        break;
    case 2:
        printf ("\nVOCE ESCOLHEU A REGIAO NORDESTE\n");
        break;
    case 3:
        printf ("\nVOCE ESCOLHEU A REGIAO CENTRO-OESTE!\n");
        break;
    case 4:
        printf ("\nVOCE ESCOLHEU A REGIAO SUDESTE!\n");
        break;
    case 5:
        printf ("\nVOCE ESCOLHEU A REGIAO SUL!\n");
        break;
    }
    } while (opcao != 0);

    return 0;
}