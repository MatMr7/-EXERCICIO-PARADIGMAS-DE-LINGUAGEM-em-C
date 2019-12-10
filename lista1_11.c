#include<stdio.h>
int temTresElementos(int* v , int n);


int main(void){
    
    int vetor_1 [] = {1,3,8,3,4,3};
    int vetor_2 [] = {8,8,4,2,5,8};
    int vetor_3 [] = {5,9,8,4,5,1};

    if(temTresElementos(vetor_1,6)){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

    if(temTresElementos(vetor_2,6)){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

     if(temTresElementos(vetor_3,6)){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

    return 0;
}

int temTresElementos(int* v , int n){

    int cont = 0;
    for(int k = 0 ; k < n ; k++){
        if(v[k] == 3) cont = cont + 1;
       
    }
    if(cont == 3){
        return 1;
    }
    return 0;

}