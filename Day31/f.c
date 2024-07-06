#include<stdio.h>
void main(){
    char carr[]={'R','A','J','M','A','D','G','U','L','K','A','R','\0'};

    char *str="RAJMADGULKAR";

    printf("%s\n",carr);
    printf("%s\n",str);

    for(int i=0;i<=13;i++){
        printf("%c\n",carr[i]);//Forcefully

    }
    printf("\n");

}
/*
RAJMADGULKAR
RAJMADGULKAR
R
A
J
M
A
D
G
U
L
K
A
R

P

*/