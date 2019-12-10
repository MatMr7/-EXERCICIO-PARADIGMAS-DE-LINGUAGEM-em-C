#include<stdio.h>

int contaOrelhas(int n);
int main(void){

printf("%i\n",contaOrelhas(7));
printf("%i\n",contaOrelhas(6));
printf("%i\n",contaOrelhas(5));
printf("%i\n",contaOrelhas(4));
printf("%i\n",contaOrelhas(3));


}

int contaOrelhas(int n){

    int cont = 0;
    

    if( n == 0){
        return 0;
    }

    

    cont += 2 + contaOrelhas(n -1);
    return cont ;





    


}