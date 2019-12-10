#include<stdio.h>
int diferenca(int* v , int n);


int main(void){

    int vetor_1 [] = {1,9,8,5,4,7};
    int vetor_2 [] = {8,8,4,2,5,8};
    int vetor_3 [] = {5,9,8,4,5,1};

    printf("%d\n",diferenca(vetor_1,6));
    printf("%d\n",diferenca(vetor_2,6));
    printf("%d\n",diferenca(vetor_3,6));




    return 0;
}

int diferenca(int* v , int n){
    int max = v[0];
    int min = v[0];

    for(int i = 0;i<n ; i++){
        if(v[i]> max){
            max = v[i];
        }
        if(v[i]< min){
            min = v[i];
        }
    }
    return (max - min);
}