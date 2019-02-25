#include <stdio.h>


int show(int num){
    printf("%i >>> Funçao shownum() \n", num);
    return 0;
}



int main(){

    int * ptr_var;
    int * ptr_var2;
    int * ptr_soma;

    printf("%p >>> Inicializa o ponteiro var \n", ptr_var);
    printf("%p >>> Inicializa o ponteiro var2 \n", ptr_var2);

    int var = 10;
    int var2 = 20;
    int soma = 0;

    printf("%i >>> o valor de var\n", var);
    printf("%i >>> o valor de var2\n", var2);

    ptr_var = &var; // ptrvar passa a ser a referencia de var
    ptr_var2 = &var2; // ptrvar2 passa a ser a referencia de var2

    printf("%p >> endereço do ponteiro var\n", ptr_var);
    printf("%p >> endereço do ponteiro var2\n", ptr_var2);
    *ptr_var = 20;
    *ptr_var2 = 10;

    ptr_soma = &soma;

    //*ptr_soma = *ptr_var + *ptr_var2;

    printf("%p >>> endereço de ptr_soma\n", ptr_soma);

    ptr_soma++;

    printf("%p >>> endereço de ptr_soma\n", ptr_soma);

    ptr_soma++;

    printf("%p >>> endereço de ptr_soma\n", ptr_soma);

    ptr_soma++;

    printf("%p >>> endereço de ptr_soma\n", ptr_soma);
    ptr_soma++;

    printf("%p >>> endereço de ptr_soma\n", ptr_soma);

    printf("%i >>> var foi alterado através do ponteiro *ptr_var\n", var);
    printf("%i >>> var2 foi alterado através do ponteiro *ptr_var2\n", var2);

    printf("%i\n", soma);

   // show(*ptr_soma);

}

