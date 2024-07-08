#include<stdio.h>

int Mystrlen(char *str){
    int count=0;
    while(*str!=0){
        count++;
        str++;


    }
    return count;

}
void main(){
    char name[10]={'K','L','R','A','H','U','L'};
    char *str="Virat Kohli";

    printf("%d\n",Mystrlen(name));
    printf("%d\n",Mystrlen(str));
}
/*
7
11
*/