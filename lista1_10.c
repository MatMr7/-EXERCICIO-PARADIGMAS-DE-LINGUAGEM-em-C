#include <stdio.h>

int somaArraySemOito(int* v , int n);

int main(void){

    int vetor_1 [] = {1,9,8,5,4,7};
 
    printf("%d \n",somaArraySemOito(vetor_1,6));
    


}

int somaArraySemOito(int* v , int n){                              
    int soma = 0;
    for(int i = 0 ; i< n;i++){
        if (v[i] != 8) {
            soma = soma + v[i];

        }
    }
    
    return soma;
}
