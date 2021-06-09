#include <stdio.h>
#include <stdlib.h>

int main(void){
    char sexo;

    printf("DIGITE O SEXO [M|F]");
    setbuf(stdin, NULL);
    scanf("%c", &sexo);
    sexo = toupper(sexo);

    if(sexo == 'M'){
        printf("O SEU SEXO E MASCULINO!\n");
    }
    else if(sexo == 'F'){
        printf("SEU SEXO E FEMININO!\n");
    }
    else
        printf("SEXO INVALIDO!");

    return 0;
}
