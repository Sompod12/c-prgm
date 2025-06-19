#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[100][100], row, col;

    printf("Enter Row number:");
    scanf("%d", &row);

    printf("Enter Coloum number:");
    scanf("%d", &col);

    for(int i = 0; i < row; i++){
       for(int j = 0; j < col; j++){
          printf("Enter %d%d matrix: ", i, j);
          scanf("%d", &arr[i][j]);
       }
    }
    for(int i = 0; i < row; i++){
       for(int j = 0; j < col; j++){
        printf("%d " , arr[i][j]);

        if(j == col-1){
            printf("\n\n");
        }
       }
    }
return 0;
}
