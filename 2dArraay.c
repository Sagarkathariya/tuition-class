#include <stdio.h>
int main(){
    int i ,j, num[10][10];
    /* entering the array elements to the matrix*/
    printf(" Input elements of 3X3 matrix:");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            scanf("%d",&num[i][j]);
        }
    }
    /* Displaying the matrix*/
    printf("The given matrix is:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%5d", num[i][j]); 
        }
        printf("\n");
    }
    
}
