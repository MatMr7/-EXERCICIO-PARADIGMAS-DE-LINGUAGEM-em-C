#include<stdio.h>
double mediaCentrada(double* v, double n);
int encontraIndiceDoMenor(double* v,int n);
int encontraIndiceDoMaior(double* v,int n);

int main(void){



    double vetor_1 []  = {3,1,5,7,9,5};
    double menor = mediaCentrada(vetor_1 , 6);
    printf("Media centrada : %.2f\n",mediaCentrada(vetor_1 , 6));

    

     return 0;
}




int encontraIndiceDoMenor(double*v , int n){

    double min = v[0];                   
    int temp = 0; // Variavel que guarda o indice do valor a ser retornado
    for(int k = 0; k < n; k++){
        if(v[k] < min ){
            min = v[k];
            temp = k;
        }
    }
    return temp;
}

int encontraIndiceDoMaior(double* v , int n){

    double max = v[0];
    int temp = 0; // Variavel que guarda o indice do valor a ser retornado
    for(int k =0 ; k < n ; k++){
        if(v[k] > max){
            max = v[k];
            temp = k;
        }
    }
    return temp;

}

double mediaCentrada(double* v,double n){
       int indiceMenor = encontraIndiceDoMenor(v,n);
       int indiceMaior = encontraIndiceDoMaior(v,n);
       int soma = 0;
       if(indiceMaior == indiceMenor){
           for(int k = 0 ; k < n ; k++){
               if(k =! indiceMenor){
                   soma = soma + v[k];
               }
           }
           return soma/(n-1);
       }else {
           for(int k = 0 ; k < n ; k++){
               if((k=! indiceMaior) && (k=! indiceMenor)){
                   soma = soma + v[k];
               }
           }
           return soma / (n-1);
       }
     }


        

