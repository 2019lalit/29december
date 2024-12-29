
//write a c program input age and check user is valid for vote or not: 
#include<stdio.h>
int main(){
    int age;
    printf("please enter the age:\n");
    scanf("%d",&age);
    if(age>18){
        printf("you are eligible for voting\n");
    }else{
        printf("you are not eligible for voting\n");
    }
    return 0;
}
