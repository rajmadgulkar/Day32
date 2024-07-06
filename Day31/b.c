#include<stdio.h>
int val;
void *fun(int x ,int y ){
    printf("%d\n",x+y);
    val=x+y;
    printf("%p\n",&val);
    return &val;

}
void main(){
    int *ptr=fun(10,20);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
}
/*
30
00007ff7b038f0a0
00007ff7b038f0a0
30
*/