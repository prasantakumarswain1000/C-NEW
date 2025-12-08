

///trnaspose of the matix 
#include<stdio.h>
int main(){
    int arr1[50][50],brr1[50][50],i,j,r,c;
    printf("enter the num of row  and column");
    scanf("%d%d",&r,&c);
    printf("enter the value in the array");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
        
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            brr1[j][i]=arr1[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",brr1[i][j]);
        }
    }
}