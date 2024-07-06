#include<stdio.h>
void main(){
    char carr[]={'C','O','R','E','2','W','E','B','\0'};
    char *str="CORE2WEB";
    printf("%s\n",carr);
    printf("%s\n",str);
    
     carr[4]='3';
    printf("%s\n",carr);
    printf("%s\n",str);

   
}
/*
CORE2WEB
CORE2WEB
CORE3WEB
CORE2WEB
*/

