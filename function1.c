//function without arguments and without returning value
#include <stdio.h>
void simple_interest(void);
int main()
{
    simple_interest();
}
void simple_interest(void)
{
    int p;
    float r, t, interest;
    printf("Input Principal:");
    scanf("%d",&p);
    printf("Input Time:");
    scanf("%f",&t);
    printf("Input Rate: ");
    scanf("%f",&r);
    interest=(p*t*r)/100;         
    printf("Simple interest is:%10.4f",interest);
   
}