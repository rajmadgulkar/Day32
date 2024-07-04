#include<stdio.h>
int printArr(int arr[][3], int arrSize){
    int sum=0;
    for(int i=0;i<arrSize;i++){
    sum=sum+*(*arr+i); 
    }
    return sum;
}
void main(){
    int arr[][3]={10,20,30,40,50,60,70,80,90};
    
    int arrSize=sizeof(arr)/sizeof(int);
    int sum=printArr(&arr,arrSize);
    printf("Sum is:%d\n",sum);

}
// Sum is:450