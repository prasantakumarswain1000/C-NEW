#include <stdio.h>
#define N 10
int main() {
    // Write C code here

    // Write C code here
int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
printf("enter the num of rows and columns in first matrix:\n");
scanf("%d%d",&m,&n);
printf("enter the first matrix:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter a rows and columns for second matrix:\n");
scanf("%d%d",&p,&q);
printf("\n enter second matrix\n");
for(i=0;i<p;i++){
    for(j=0;i<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("\n first matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("/nsecond matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=p){
        printf("can not multiply");
    }
    else{
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++){
                sum=0;
                for(k=0;k<m;k++){
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
        printf("multiplication is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

}
