//function with passing arguments but without returning values
#include<stdio.h>
void simple_interest(int,float,float);
int main(){
int p;
float t,r;
printf("Input Principal Amount:");
scanf("%d",&p);
printf("Input Time:");
scanf("%f",&t);
printf("Input Rate:");
scanf("%f",&r);
simple_interest(p,t,r);
}
void simple_interest(int x,float y,float z){
    float interest;
    interest=(x*y*z)/100;
    printf("\nSimple Interest is:%10.4f",interest);
}