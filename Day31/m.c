//Use of gets & puts 
#include<stdio.h>
void main(){
    char name[20];
    printf("Enter the string:");
    gets(name);
    puts(name);

}
/*
m.c:6:5: warning: call to 'gets' declared with attribute warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
    6 |     gets(name);
      |     ^~~~~~~~~~
Enter the string:rajmadgulkar
rajmadgulkar
*/