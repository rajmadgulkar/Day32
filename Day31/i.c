#include<stdio.h>
void main(){
    int *str="Raj";
    printf("%ld\n",sizeof(str));//8 <It is  a pointer.
    printf("%d",strlen(str));//3
}