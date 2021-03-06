#include<stdio.h>
/*
*Pattern-1
*N = 3(Number of Row)
*Triangle
1 
1 2 
1 2 3 

*Inverted Triangle
1 2 3 
1 2 
1 
*Mixed ==> Except First Row of Inverted Triangle  
1 
1 2 
1 2 3 
1 2 
1 

*/
int main() {

    int N,row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",col);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N-1; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",col);
        }
        printf("\n");

    }

    return 0;
}

