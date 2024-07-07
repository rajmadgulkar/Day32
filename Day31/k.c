#include<stdio.h>
void main(){
    char *str="virat";
    printf("%c\n",str[2]);
    str[2]='K';//segmentation fault as *str goes into read only memory
    printf("%c\n",str[2]);
}
//r