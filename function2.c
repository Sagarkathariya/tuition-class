//function without arguments but returning values
#include <stdio.h>
float simple_interest(void);
int main()
{
    float result;
    result=simple_interest();
    printf("Simple interest is:%10.3f",result);
}
float simple_interest(void)
{
    int p;
    float t, r, interest;
    printf("Input Principal Amount:");
    scanf("%d", &p);
    printf("Input Time:");
    scanf("%f", &t);
    printf("Input Rate:");
    scanf("%f", &r);
    interest=(p*t*r)/100;
    return interest;
}
