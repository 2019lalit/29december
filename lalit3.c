//write a c program input number and check number is divisible by 2 or not
#include<stdio.h>
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is divisible by 2\n");
    }else{
        printf("number is not divisible by 2\n");
    }
    return 0;
}
