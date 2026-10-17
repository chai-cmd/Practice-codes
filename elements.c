/*Implement a C program to calculate and display the sum of elements in each row and each column of a given matrix.*/

#include<stdio.h>
int main(){
    int row, col, i, j, a[100][100], sum_row=0, sum_col=0;
    printf("Enter the number of elemnts in row and column: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of matrix:\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }printf("\n");
        }

        printf("\nSum of each row:\n");
        for(i=0; i<row; i++){
            sum_row=0;
            for(j=0; j<col; j++){
                sum_row += a[i][j];
            }

            printf("Sum of row %d: %d\n", i+1, sum_row);
        }


        printf("\nSum of each column:\n");
        for(j=0; j<col; j++){
            sum_col=0;
            for(i=0; i<row; i++){
                sum_col += a[i][j];
            }

            printf("Sum of column %d: %d\n", j+1, sum_col);
        }

        return 0;
    }
