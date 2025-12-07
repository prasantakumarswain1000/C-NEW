

// upper trianle of the  matrix 
#include <stdio.h>
  void main() {
      int a[3][3],i,j;
      printf("enter  the value in row wise ");
      for(i=0;i<3;i++){
          for(j=0;j<3;j++){
              scanf(" %d",&a[i][j]);
      }
       printf("\n");   
      }
      
      for(i=0;i<3;i++){
          for(j=0;j<3;j++){
              
           if(i<=j){
                  printf("  %d",a[i][j]);
           }
      }
          printf("\n");   
      }
      
   
}