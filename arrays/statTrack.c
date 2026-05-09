#include <math.h>

/* 
 * Computes and returns the mean of the values in the array.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 */
double mean(double data[], int n){
    double sum = 0;
    for(int index = 0; index < n; index++){
        sum += data[index];
    }

    return sum/n;
}
/*
 * Computes and returns the variance of the values stored in the array data.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (variance of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double var(double data[], int n){
    double variance = 0;
    double avg = mean(data, n);

    for(int index = 0; index < n; index++){
        variance += pow(data[index] - avg, 2.0);
    }

    return variance/(n - 1);
}
/*
 * Computes and returns the standard deviation of
 * the values stored in the array data
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (std deviation of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double sdev(double data[], int n){
    double variance = var(data, n);
    double deviation = 0;

    deviation = sqrt(variance);

    return deviation;
}


/*
 * Computes and returns the minimum value stored in index 0 to (n - 1) of
 * the array data.
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 */
double minimum(double data[], int n){
    double min = data[0];

    for(int index = 0; index < n; index++){
        if(data[index] < min){
            min = data[index];
        }
    }

    return min;
}