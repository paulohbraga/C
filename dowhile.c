#include <stdio.h>

int main(void){
    int x, y;
    do{
        printf("Digite um número para mostra-lo na tela ou digite 10 para parar o programa: ");
        scanf("%i", &x);
        if(x == 0){
            break;
        }
        printf("O quadrado é de %i é: %i\n",x, x * x);


    }while(x != 0);
    printf("Fim programa!\n");
}