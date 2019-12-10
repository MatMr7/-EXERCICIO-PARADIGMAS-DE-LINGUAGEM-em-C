#include<stdio.h>

int contaOrelhas(int n);

int main(void){

printf("%i\n",contaOrelhas(1));
printf("%i\n",contaOrelhas(6));
printf("%i\n",contaOrelhas(5));
printf("%i\n",contaOrelhas(4));
printf("%i\n",contaOrelhas(3));
printf("%i\n",contaOrelhas(2));
printf("%i\n",contaOrelhas(1));
}

int contaOrelhas(int n){

    int cont;

    if(n == 0){
        return 0;
    }
    if( n % 2 == 0){
        cont += 3 + contaOrelhas(n-1);
    }else{
    
    cont += 2 + contaOrelhas(n-1);

    }

}
