#include<stdio.h>
void main(){
    char name[]={'V','I','R','A','T','\0'};
    char *fname1="Messi";
    char *fname2="Neymar Jr";
    char *fname3="Messi";

    printf("%p %p\n",fname1,fname2);
    printf("%s\n",fname1);
    printf("%s\n",fname2);
    printf("%s\n",fname3);

}
/*
00007ff68962a050 00007ff68962a056
Messi
Neymar Jr
Messi
*/