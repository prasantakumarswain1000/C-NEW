#include <stdio.h>

void  main() {
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("printf the value of array:");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }
     printf("insert the second array");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
           
            scanf(" %d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j]= a[i][j]+b[i][j];
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    
}