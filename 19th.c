
//sum of the diogonal element 
//input 1 4 5 8 7 5 5 5 9
//output 5+7+5=17

#include<stdio.h>
void main(){
    int arr[3][3],i,j,sum=0;
    printf("enter the elements of array:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
        }
    }
    printf("the sum of diagonal elements is:%d",sum);
}