#include <stdio.h>

void mensagem(char mensagem[]){

    printf("%s", mensagem);
}

int main(){
    int *x;
    //x += 1;
    mensagem("Paulo Braga");
    printf("%i",*x);
}

