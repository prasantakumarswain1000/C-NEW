#include <stdio.h>

void  main() {
   
    int x[3][3],i,j,sum;
    printf("enter the num in array ");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf(" %d",&x[i][j]);
        }
        printf("\n");
    }
    
     
    
    for(i=0;i<=2;i++){
        sum=0;
        for(j=0;j<=2;j++){
            if(x[i][j]%2==0){
                sum=sum+x[i][j];
            }
             
        }
        printf(" %d",sum);
    }
    
}