#include<stdio.h>
int verificaTresNumerosConsecutivos(int* v , int n);


int main(void){

    int vetor_1 [] = {1,9,8,5,4,7};
    int vetor_2 [] = {8,8,3,4,5,8};
    int vetor_3 [] = {5,9,8,4,5,1};
    
    if(verificaTresNumerosConsecutivos(vetor_1,6)) {

        printf("Verdadeiro\n");

        }else{
            printf("Falso\n");
        }
        


    if(verificaTresNumerosConsecutivos(vetor_2,6)) {
        
        printf("Verdadeiro\n");

        }else{
            printf("Falso\n");
        }



    if(verificaTresNumerosConsecutivos(vetor_3,6)) {
        
        printf("Verdadeiro\n");

        }else{
            printf("Falso\n");
        }

    return 0;
}


int verificaTresNumerosConsecutivos(int* v,int n){
    for(int k = 0 ; k < n + 2 ; k ++){
        if(  (v[k+1] == v[k]+ 1) && (v[k+2] == v[k] + 2)){
            return 1;
        }
    }
    return 0;

}