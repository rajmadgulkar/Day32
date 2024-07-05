#include<stdio.h>
int printArr(int arr[][3], int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if(i=j){
                sum=sum+*(*arr+i);
            }
        }
    }
    return sum;
}
void main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    int row=4;
    int col=4;
    int sum=printArr(&arr,row ,col);
    printf("Sum of diagonal elements:%d\n",sum);

}