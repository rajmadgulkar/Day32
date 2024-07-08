#include<stdio.h>
#include<string.h>
void main(){
    char name[10]={'K','L','R','A','H','U','L'};
    char *str="Virat Kohli";

    int lenName=strlen(name);
    int lenstr=strlen(str);

    printf("%d\n",lenName);
    printf("%d\n",lenstr);
}
/*
7
11
*/