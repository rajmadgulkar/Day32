#include<stdio.h>
void printArr(int arr[][3], int arrSize){
    for(int i=0;i<arrSize;i++){
    printf("%d\n",*(*arr+i));
    
    }
}
void main(){
    int arr[][3]={10,20,30,40,50,60,70,80,90};
    
    int arrSize=sizeof(arr)/sizeof(int);
    printArr(&arr,arrSize);

}
/*
10
20
30
40
50
60
70
80
90
*/