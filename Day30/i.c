#include<stdio.h>

void add(int x,int y){
    printf("1=%d\n",x+y);
    printf("2=%d\n",x+y);
    printf("3=%d\n",x+y);

    }

    void main(){
        void (*ptr)(int,int);

        ptr=add;
        ptr(10,20);
        printf("%p\n",ptr);
        ptr++;
        printf("%p\n",ptr);
        ptr(30,50);



}
/*1=30
2=30
3=30
00007ff7bdf61824
00007ff7bdf61825
1=80
2=80
3=80
*/