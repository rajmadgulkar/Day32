#include<stdio.h>
void printArr(int *ptr, int arrSize){
    for(int i=0;i<arrSize;i++){
    printf("%d\n",*(ptr+i));
    }
}

void main(){
    int arr[]={10,20,30,40,50};
    
    int arrSize=sizeof(arr)/sizeof(int);
    printArr(arr,arrSize);

}
// 10
// 20
// 30
// 40
// 50