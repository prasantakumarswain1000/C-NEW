#include<stdio.h>
void  main(){
    char name[50];
    int count=0;
    int i;
    printf(" enter your name :");
    fgets(name,50,stdin);
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    count=count-1;
    printf("%d",count);
}