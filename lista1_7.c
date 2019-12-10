#include<stdio.h>

int contPares(int * v , int n);

int main(void){
    int vetor_1 []  = {3,1,5,7,9,5};
    int vetor_2  [] = {9,8,4,5,1,8};
    int vetor_3  [] = {6,8,4,5,2,6};

    int value_1 = contPares(vetor_1,6);
    int value_2 = contPares(vetor_2,6);
    int value_3 = contPares(vetor_3,6);

    printf("%d\n", value_1);
    printf("%d\n", value_2);
    printf("%d\n", value_3);

}

int contPares(int * v , int n){
    int cont = 0;
    for(int i = 0 ; i<n ; i++){
        if(v[i]%2 == 0){
            cont = cont+1;
        }
    }
    return cont;
}