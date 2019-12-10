#include<stdio.h>
#include<string.h>

void limpastr(char * str , int index);
void limpastr2(char * str , int i , int k , int sz);

int main(){
    char s [80];
    s[0] = '\0';
    strcpy(s,"yyzzzAAAAAAAAAYYYYYYYYYYYYAAAAAAAAAKKKKKK");
    printf("\nString %s" , s);
    limpastr(s,strlen(s));
    printf("Viroi %s\n",s);
    return 0;

   
}
void limpastr(char * str , int sz){
   if(str[0] == '\0') return;
   limpastr2(str,1,0,sz);

}
void  limpastr2 ( char* str,int i , int j,int sz){

 if( i == sz + 1){
     str[j] = '\0';
     return ;
 }
 if(str[i] != str[i-1]){

     str[j] = str[i-1];
     return limpastr2(str,i+1,j+1,sz);
 }else{
     return limpastr2(str,i+1,j,sz);
 }
                                                                                                        
        }
 
