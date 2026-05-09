#include <stdio.h>

#define INPUTFILE "input.dat"
#define OUTPUTFILE "output.dat"

int main(void){

    double value;
    FILE* inputFILE;
    inputFILE = fopen(INPUTFILE, "r");
    FILE* outputFILE;

    if(inputFILE != NULL){

        while(fscanf(inputFILE, "%lf", &value) == 1){

            if(value > 1.00){
                value = 1.00;
            } else if(value < 0.00){
                value = 0.00;
            }
        }

        outputFILE = fopen(OUTPUTFILE, "w");
        fprintf(outputFILE, "%lf", value);
        fclose(outputFILE);

    } else{
        printf("Error\n");
    }

    return 0;
}