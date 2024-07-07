#include<stdio.h>
void main(){
    char name[]={'R','O','H','I','T','\0'};//6
    char *str="ViratK";//8<as it is pointer
    printf("%ld\n",sizeof(name));
    printf("%ld\n",sizeof(str));

    puts(name);
    puts(str);

}
/*
6
8
ROHIT
ViratK
*/