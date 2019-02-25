#include <stdio.h>

int soma(int num1, int num2){
    return num1 + num2;
}

void parouimpar(int x_nums){
    int actual_nums = 0;
    while(actual_nums <= x_nums){
        if(actual_nums % 2 == 0){
            printf("%i é par\n", actual_nums );
        }else{
            printf("%i é ímpar\n", actual_nums);
        }
        actual_nums++;
    }
}


int main(){
    parouimpar(10);
}