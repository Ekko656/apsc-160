#include <stdio.h>
#include <math.h>

#define PI acos(-1.0)

int main(void){
    int currentRow, currentCol;
    int maxRows, maxCol;
    double current_X, max_X;
    double current_sin, max_sin;


    do{
        printf("Enter number of rows:\n");
        scanf("%d", &maxRows);

        printf("Enter number of columns:\n");
        scanf("%d", &maxCol);

        if(maxRows <= 0 || maxCol <= 0){
            printf("Error\n");
        }

    } while(maxRows <= 0 || maxCol <= 0);

    currentRow = 0;
    max_X = 0;
    max_sin = -1.0;
    while(currentRow < maxRows){

        currentCol = 0;
        while(currentCol < maxCol){

            current_X = ((currentRow + 1) * PI)/currentRow;
            current_sin = sin((currentCol + 1) * current_X);

            printf("%lf", current_X);
            printf(" %lf", current_sin);
            
            if(current_sin > max_sin){
                max_sin = current_sin;
                max_X = current_X;
            }

            currentCol++;
        }

        currentRow++;
        printf("\n");
    }

    printf("Maximum output value of %lf occurs at x = %lf\n", max_sin, max_X);

    return 0;

}
