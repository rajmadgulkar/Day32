#include<stdio.h>
void main(){
    char arr[20];
    printf("Enter player name:");
    gets(arr);
    puts(arr);

    char *str=arr;
    puts(str);
}
/*
Enter player name:Raj Madgulkar
Raj Madgulkar
Raj Madgulkar
*/