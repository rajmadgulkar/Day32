#include<stdio.h>
void main(){
    char name[]={'R','O','H','I','T','S'};
    char *str="ViratK";
    for(int i=0;i<=7;i++){
        printf("%c",name[i]);
    }
    printf("\n");

    for(int i=0;i<=7;i++){
        printf("%s",str);
        printf("%s",*(str+i));
        
    }
    
}
/*
ROHITS
ViratK%
*/