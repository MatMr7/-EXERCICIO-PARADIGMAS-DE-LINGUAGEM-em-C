#include<stdio.h>

int chocolate(int goal , int small , int big);

int main(){

    printf("Will be necessary %d chocolate bars\n",chocolate(16,3,3));
    printf("Will be necessary %d chocolate bars\n",chocolate(14,3,3));
    printf("Will be necessary %d chocolate bars\n",chocolate(20,4,0));

}

int chocolate(int goal,int small,int big){

    int necessary =  goal % 5;
    if(necessary > small ) return -1;
    return necessary;
}