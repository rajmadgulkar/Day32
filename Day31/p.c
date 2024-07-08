#include<stdio.h>
void main(){
    char Pname[]={'R','O','H','I','T','S','\0','V','A','D','A'};
    char *str="ViratK";
    printf("%ld\n",sizeof(Pname));

    puts(Pname);
    for(int i=0;i<11;i++){
        printf("%c",Pname[i]);

    }
    printf("\n");
    for(int i=0;i<7;i++){
        printf("%c",str[i]);

    }
}
/*
11
ROHITS
ROHITSVADA
ViratK
*/