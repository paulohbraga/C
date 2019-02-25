#include <stdio.h>

int square(int altura, int largura){
    char l = 'x'; 
    int x, y;
    for(x = 0; x < altura; x++){
        for(y = 1; y <= largura; y++){
            printf(" %c", l); // lateral direita de cada n
        }
        printf("\n"); //aresta direita
    }    
    return 0;
}

int main(){
    int x, y;
    printf("Digite lado altura: ");
    scanf("%i", &x);
    printf("Digite lado largura: ");
    scanf("%i", &y);
    square(x, y);
}