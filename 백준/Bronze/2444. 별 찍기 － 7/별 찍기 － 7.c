#include <stdio.h>

int main(){
    int n;
    int row;
    
    scanf("%d", &n);
    row = 2 * n - 1;
    
    for(int c_row = 0; c_row < row / 2; c_row++){
        for(int space = c_row; space < row / 2; space++)
            printf(" ");
        for(int star = 0; star < (c_row + 1) * 2 - 1; star++)
            printf("*");
        printf("\n");
    }

    for(int c_row = (row / 2) + 1; c_row <= row; c_row++){
        for(int space = 0; space < c_row - n; space++)
            printf(" ");
        for(int star = 0; star < (row - c_row) * 2 + 1; star++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}