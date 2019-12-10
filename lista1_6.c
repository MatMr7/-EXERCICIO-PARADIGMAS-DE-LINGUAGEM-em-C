#include <stdio.h>

int alfaOmega(int* v , int n);


int main(void){

    int vetor_1 []  = {0,1,5,7,9,0};
    int vetor_2  [] = {9,8,4,5,1,8};
    int vetor_3  [] = {6,8,4,5,2,6};

    if(alfaOmega(vetor_1 , 6)){
        printf("Igualdade Alfa e Omega\n");
    }
    if(alfaOmega(vetor_2 , 6)){
        printf("Igualdade Alfa e Omega\n");
    }
    if(alfaOmega(vetor_3 , 6)){
        printf("Igualdade Alfa e Omega\n");
    }

}

int alfaOmega(int* v , int n){  
    if(v[0] == v[n-1]){
        return 1;
    }
    return 0;

}


