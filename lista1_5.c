#include<stdio.h>

int alfaOmega6(int* v , int n );

int main(void)
{
    int vetor_1 []  = {0,1,5,7,9,6};
    int vetor_2  [] = {6,8,4,5,1,8};
    int vetor_3  [] = {4,8,4,5,2,4};

    if(alfaOmega6(vetor_1 , 6)){
        printf("Alfa e Omega\n");
    }

    if(alfaOmega6(vetor_2 , 6)){
        printf("Alfa e Omega\n");
    }

    if(alfaOmega6(vetor_3 , 6)){
        printf("Alfa e Omega\n");
    }



    return 0;
}

int alfaOmega6(int* v, int n){
    if(v[0] == 6 || v[n-1] == 6){
        return 1;
    }
    return 0;
}
