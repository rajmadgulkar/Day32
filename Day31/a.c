#include<stdio.h>
void *fun(int x ,int y ){
    printf("%d\n",x+y);
    int val=x+y;
    printf("%p\n",&val);
    return &val;

}
void main(){
    int *ptr=fun(10,20);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
}
// 30
// 00000072a85ffb6c
// 0000000000000000 No dereferencing as after calling of a function stack frame gets popped.