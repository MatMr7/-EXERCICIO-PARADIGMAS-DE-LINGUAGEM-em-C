#include<stdio.h>

void trocaXPorY(char* v, int n);
int main(void){
 
    char string[8]  = "yyzzzAAy";
    trocaXPorY(string,8);
     for(int k = 0; k<8 ;k++){
         printf("%c\n",string[k]);
     }

    return 0;
}


void trocaXPorY(char* v, int n){

    for(int k = 0; k<n ;k++){

        if(v[k] == 'x'){

            v[k] = 'y';

        }else if(v[k] == 'y'){

            v[k] = 'x';
        }else if(v[k] == 'X'){


            v[k] = 'Y';

        }else if(v[k] == 'Y'){


            v[k] = 'X';

        }
    }
    
}