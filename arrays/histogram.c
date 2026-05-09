/*
 * Author:   APSC 160 Instructor
 * Purpose:  Print a histogram of values entered by the user
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_BUCKETS 10

void printRow(char star, int n) {
    for(int i = 0; i < n; i++){
        printf("%c", star);
    }
}

int main(void)
{
    int hist[NUM_BUCKETS] = {0};
    int num = 0;
    int bucket;

    /* YOUR CODE HERE: read integers from user until -1,
       and increment the correct counts bucket */

       do{
        scanf("%d", &num);
        if(num < 0 && num != -1){
            printf("Invalid number\n");
        }

        if(num != 1){
            bucket = (num - 1)/10;
            hist[bucket]++;
        }
       } while(num != -1);

    /* YOUR CODE HERE: loop through all 10 buckets and print
       the range label and call printRow for each */
       int count = 0;
       while(count < NUM_BUCKETS){
        printf("%d - %d", count * 10 + 1, count * 10 + 10);

        printRow('*', hist[count]);
        count++;
        
        printf("\n");
       }


    return 0;
}