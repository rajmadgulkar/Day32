#include<stdio.h>
void add(int x,int y){
    printf("Add: %d\n",x+y);
}
void sub(int x, int y ,void (*ptr)(int ,int)){
    printf("%d\n",x-y);
    ptr(x,y);
    
}
void main(){
    sub(10,20,add);
}
// -10
// Add: 30