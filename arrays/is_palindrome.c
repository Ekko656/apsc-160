#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int data[], int size) {
    int low = 0;
    int high = size - 1;

    while(low < high){
        if (data[low] != data[high]){
            return 0;
        }
        low++;
        high--;
    }

    return 1;
}

int main(void) {
    int data1[] = { 1, 2, 3, 2, 1 };
    int data2[] = { 1, 2, 3, 4, 5 };

    printf("%d\n", isPalindrome(data1, 5));  /* expected: 1 */
    printf("%d\n", isPalindrome(data2, 5));  /* expected: 0 */

    return 0;
}