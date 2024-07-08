#include<stdio.h>
void main(){
    char Pname[10];
    printf("Enter player name:");
    gets(Pname);
    puts(Pname);

}
/*
Enter player name:
*** stack smashing detected ***: terminated
Aborted
*/