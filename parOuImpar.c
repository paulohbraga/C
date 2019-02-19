#include <stdio.h>

int main(){
    int i;
    printf("Digite o valor final: ");
    int count = scanf("%i", &i);
    int x = 0;

    while( x <= i){ 
        if (x % 2 != 0){
            printf("%i é impar \n", x);
        } else {
            printf("%i é par \n", x);
        }
        x++;
    }

    return 0;
}