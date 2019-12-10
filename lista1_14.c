#include<stdio.h>

int isEquilibrado(int* v , int n);
int main(void){

    int vetor_1 [] = {1,9,8,5,4,7};
    int vetor_2 [] = {1,9,8,7,4,7};

   if(isEquilibrado(vetor_1,6)){
       printf("Equilibrado\n");
   }else{
       printf("Não equilibrado\n");
   }
    if(isEquilibrado(vetor_2,6)){
       printf("Equilibrado\n");
   }else{
       printf("Não equilibrado\n");
   }

    return 0;
}

int isEquilibrado(int* v , int n){

    int mid = n/2;
    int part1 = 0;
    int part2 = 0;

    for(int k =0 ; k < mid ; k++){
        part1 += v[k];
    }
    
    for(int k = mid; k < n;k++){
        part2 += v[k];
    }

    if(part1 == part2){
        return 1;
    }
    return 0;


}



