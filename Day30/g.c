#include<stdio.h>

void add(int x,int y){
    printf("%d\n",x+y);
    }
void sub(int x,int y){
    printf("%d\n",x-y);
    }

    void main(){
        void (*ptr)(int,int);

        ptr=add;
        ptr(10,20);

        ptr=sub;
        ptr(30,20);

}
// 30
// 10