#include<stdio.h>
void main(){
    char x[5];
    printf("enter the string :");
    fgets(x,sizeof(x),stdin);
    puts(x);
}