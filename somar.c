#include <stdio.h>

int soma(int num1, int num2){
    return (num1 + num2);
}

int main(){
    int x, y, total;
    printf("Digite o primeiro número: ");
    scanf("%i", &x);
    printf("Digite o segundo número: ");
    scanf("%i", &y);
    total = soma(x, y);
    printf("%i\n", total);

}