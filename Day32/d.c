#include<stdio.h>
void printfstring(char str1[]);
void stringprintf(char *str2);

void main(){
    char arr[20];
    printf("Enter the string:");

    gets(arr);

    printfstring(arr);
    stringprintf(arr);

    
}
void printfstring(char str1[]){
    puts(str1);

}
void stringprintf(char *str2){
    puts(str2);
    
}
/*
Enter the string:Raj Madgulkar
Raj Madgulkar
Raj Madgulkar
*/