#include<stdio.h>

    struct abc{
        char name[50];
        int rollno;
        int marks;
    };
void main(){
    int i;
    struct abc student[3];
    for(i=0;i<=2;i++){
        printf("enter name,rollno,marks of student %d :",i+1);
        scanf("%s %d %d",student[i].name,&student[i].rollno,&student[i].marks);
        printf("name: %s\n",student[i].name);
        printf("rollno: %d\n",student[i].rollno);
        printf("marks: %d\n",student[i].marks);
    }
}
