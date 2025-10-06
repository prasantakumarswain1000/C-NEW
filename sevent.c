#include <stdio.h>
//switch conditional operator
int main(){
    int day;
    printf("enter (1-7) day:");
    scanf("%d",&day);



    switch(day){
        case 1:printf("monday\n");
        break;
        case 2:printf("tuesday\n");
        break;
        case 3:printf("wednesday\n");
        break;
        case 4:printf("thrusday\n");
        break;
        case 5:printf("friday\n");
        break;
        case 6:printf("saturday\n");
        break;
        case 7:printf("sunday\n");
        break;
        default:printf("not a valid day!\n");
        break;

    }
return 0;

}




// when you enter 3 then it print wednesday beacause in the case 3 you command to print wednesday
//in the place of 1 2 3 4 you can aso use that  character whrn you emter the paticular character it show that that case 
#include <stdio.h>
//switch conditional operator
int main(){
    int day;
    printf("enter (1-7) day:");
    scanf("%d",&day);



    switch(day){
        case 'm':printf("monday\n");
        break;
        case 't':printf("tuesday\n");
        break;
        case 'w':printf("wednesday\n");
        break;
        case 'th':printf("thrusday\n");
        break;
        case 'f':printf("friday\n");
        break;
        case 'sa':printf("saturday\n");
        break;
        case 'sun':printf("sunday\n");
        break;
        default:printf("not a valid day!\n");
        break;

    }
return 0;

}