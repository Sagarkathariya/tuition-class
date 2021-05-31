//Function with passing arguments and with returning values
#include <stdio.h>
float simple_interest(int, float, float);
int main()
{
    int p;
    float t,r,result;
    printf("Input Principal Amount:");
    scanf("%d",&p);
    printf("Input Time:");
    scanf("%f",&t);
    printf("Input Rate:");
    scanf("%f",&r);
    result=simple_interest(p,t,r);
    printf("Simple Interest:%10.4f",result);
}

float simple_interest(int x,float y, float z){
    float interest;
    interest=(x*y*z)/100;
    return interest;
}