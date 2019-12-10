#include<stdio.h>
int somaDigitos(int n);
int main(void){

    printf("%i\n",somaDigitos(87));
    printf("%i\n",somaDigitos(87));


  


    return 0;

}

int somaDigitos(int n){
    int cont ;
    if( n <= 0) return 0;

    cont += n%10 + somaDigitos(n/10);

    return cont;
    

}

