#include <stdio.h>


void multiply(int x, int y){
    printf("%i \n", x * y);
}

int main(){
    int x, y;
    printf("Digite um número: ");
    scanf("%i", &x);
    printf("Digite outro número: ");
    scanf("%i", &y);
    multiply(x, y);

}