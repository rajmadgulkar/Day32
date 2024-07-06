#include<stdio.h>
int *fun(){
    int arr[]={10,20,30,40,50};
    return arr;

}
void main(){
    int *ptr=fun();
    printf("%d\n",*ptr);
}

//Wrong Concept function never returns an array