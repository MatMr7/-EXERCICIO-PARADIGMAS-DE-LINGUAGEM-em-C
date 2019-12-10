#include<stdio.h>

int contTijolos(int n);

int main(void){

    printf("%i\n",contTijolos(4));
    printf("%i\n",contTijolos(3));
    printf("%i\n",contTijolos(2));
    printf("%i\n",contTijolos(1));
    printf("%i\n",contTijolos(0));
    
    
    
    
    return 0;
}

int contTijolos(int n){
    
    int cont = 1 ;

    if(n == 0) return 0;

    if(n == 1) return 1;


    cont += 2 + contTijolos(n-1);
    


    

   
    
}