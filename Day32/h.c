#include<stdio.h>
//void or char*
char *Mystrcpy(char *dest,const char *src){
    while(*src!='\0'){
        *dest = *src;
        dest++;
        src ++;
    }
    *dest='\0';
    return dest;
}
void main(){
    char *str1="Hardik Pandya";
    char str2[20];
    puts(str1);
    puts(str2);

    strcpy(str2,str1);

    puts(str1);
    puts(str2);

}
/*
Hardik Pandya
☻╟╡Ñ
Hardik Pandya
Hardik Pandya
*/