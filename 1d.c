#include <stdio.h>
int main()
{

    int i , num[5];
    printf("Input the five numbers:");
    for(i=0; i<5; i++){
        scanf("%d",&num[i]);
    }

    for(i=0; i<5; i++){
        printf("%5d",num[i]);
    }



    // int i, num[5];
    // printf("Enter the five Number:");
    // for (i = 0; i < 5; i++)
    // {
    //     scanf("%d", &num[i]);
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%5d", num[i]);
    // }
}