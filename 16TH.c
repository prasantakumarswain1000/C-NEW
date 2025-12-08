//to display shorted array
#include <stdio.h>
void main(){
    int arr[5],i,j,temp;
    printf("enter the eleements of array:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
       
    }
    for(i=0;i<5;i++){
        printf(" %d",arr[i]);
    }

}
//enter the eleements of array:1 5 3 6 8
 //1 3 5 6 8