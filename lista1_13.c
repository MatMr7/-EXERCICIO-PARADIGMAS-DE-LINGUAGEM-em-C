#include<stdio.h>
void descolamentoCircularParaEsquerda(int* v , int n);


int main(void){

    int vetor_1 [] = {1,9,8,5,4,7};

    descolamentoCircularParaEsquerda(vetor_1 , 6);
    
    printf("%i\n",vetor_1[0]);
    printf("%i\n",vetor_1[1]);
    printf("%i\n",vetor_1[2]);
    printf("%i\n",vetor_1[3]);
    printf("%i\n",vetor_1[4]);
    printf("%i\n",vetor_1[5]);
         


    return 0;
    
}

void descolamentoCircularParaEsquerda(int * v , int n){
    int max = n-1;
    for(int i = 0 ; i < n-1 ; i++){
        int newIndex = i-1;
        if(newIndex < 0){
            int temp = v[0];
            v[0] = v[max];
            v[max] = temp;
        }else{
            int temp = v[i];
            v[i] = v[i-1];
            v[i-1] = temp;
        }
    }

    


}