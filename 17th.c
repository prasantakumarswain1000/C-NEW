//display array with parameter passing 
#include<stdio.h>
void display(int[],int);
void input(int[],int);
void main(){
    int x[5];
    input(x,5);
    display(x,5);

}
void input(int y[],int size){
    int i;
    for(i=0;i<=size-1;i++){
        scanf("%d",&y[i]);
    }
}
void display(int y[],int size){
    int i;
    for(i=0;i<=size-1;i++){
        printf("%d",y[i]);
    }
}