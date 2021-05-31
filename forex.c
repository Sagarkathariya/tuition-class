#include<stdio.h>
float sum(float);
int main(){
    float sum;
    float num1, num2;
    // for(int i=0;i<=10;i++){
    //     printf("%4d",i);
    // }
    printf("Input value of numb1:");
    scanf("%f",&num1);
    printf("Input value of numb2:");
    scanf("%f",&num2);
    printf("Sum of num1 and num2 is:%d",sum);
}
float Num(float num1,float num2){
    float sum;
    
     sum=num1+num2;
    return sum;
}