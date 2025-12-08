//pointer to array
#include<stdio.h>
void main(){
    int x[]={2,3,4,5,6,7},i;
    int*ptr;
    ptr=&x[0];
    printf("show the  value of the array ");
    for(i=0;i<=5;i++){
        printf("%d",*(ptr+i));
    }
}